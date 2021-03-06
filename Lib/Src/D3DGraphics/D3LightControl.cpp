#include "pch.h"
#include <D3DGraphics/D3LightControl.h>

DECLARE_THISFILE;

bool D3LightControl::s_renderEffectEnabled = false;

D3LightControl::D3LightControl(D3Scene &scene, int lightIndex) : SceneObjectWithMesh(scene), m_lightIndex(lightIndex) {
  m_size          =  1;
  m_materialIndex = -1;
  m_effect        = NULL;
}

D3LightControl::~D3LightControl() {
  SAFERELEASE(m_effect);
}

LPD3DXMESH &D3LightControl::optimizeMesh(LPD3DXMESH &mesh) { // static
  DWORD *rgdwAdjacency = new DWORD[mesh->GetNumFaces() * 3]; TRACE_NEW(rgdwAdjacency);
  if(rgdwAdjacency == NULL ) {
    throwException(_T("Out of memory"));
  }

  try {
    V(mesh->GenerateAdjacency(1e-6f, rgdwAdjacency));
    V(mesh->OptimizeInplace(D3DXMESHOPT_VERTEXCACHE, rgdwAdjacency, NULL, NULL, NULL));
    SAFEDELETEARRAY(rgdwAdjacency);
  } catch(...) {
    SAFEDELETEARRAY(rgdwAdjacency);
    throw;
  }
  return mesh;
}

LIGHT D3LightControl::getLight() const {
  const LIGHT result = m_scene.getLight(m_lightIndex);
  if ((result.m_index != m_lightIndex) || (result.Type != getLightType())) {
    showError(_T("%s:Light %d is undefined")
             ,__TFUNCTION__
             ,m_lightIndex);
  }
  return result;
}

void D3LightControl::setMaterialColors(D3DMATERIAL &mat) const {
  const D3DCOLORVALUE color = getColor();
  mat.Diffuse  = color;
  mat.Specular = color;
#define EMSIVEFACTOR 0.4f
  mat.Emissive = D3DXCOLOR(color.r*EMSIVEFACTOR, color.g*EMSIVEFACTOR, color.b*EMSIVEFACTOR,1);
}

void D3LightControl::createMaterial() {
  if(hasMaterial()) return;
  D3DMATERIAL mat;
  ZeroMemory(&mat, sizeof(D3DMATERIAL));
  setMaterialColors(mat);
  mat.Power = 0.7f;
  m_materialIndex = getScene().addMaterial(mat);
}

void D3LightControl::setMaterialColors() const {
  MATERIAL mat = getScene().getMaterial(getMaterialIndex());
  setMaterialColors(mat);
  getScene().setMaterial(mat);
}

D3DCOLORVALUE D3LightControl::getColor() const {
  const LIGHT light = getLight();
  return light.m_enabled ? light.Diffuse : getDisabledColor();
}

void D3LightControl::draw() {
  if(!s_renderEffectEnabled) {
    if(!hasMaterial()) {
      createMaterial();
    } else {
      setMaterialColors();
    }
    getScene().setFillMode(D3DFILL_SOLID).setShadeMode(D3DSHADE_GOURAUD);
    drawSubset(0);
  } else {
    prepareEffect();
    UINT passCount;
    V(m_effect->Begin( &passCount, 0));
    for(UINT pass = 0; pass < passCount; pass++) {
      V(m_effect->BeginPass(pass));
      drawSubset(0);
      V(m_effect->EndPass());
    }
    V(m_effect->End());
  }
}

void D3LightControl::prepareEffect() {
  D3Scene &scene = getScene();
  if(m_effect == NULL) {
    createEffect();
  }

  const D3PosDirUpScale &pdus   = scene.getCameraPDUS();
  const D3DXMATRIX       mView  = pdus.getViewMatrix();
  const D3DXMATRIX       mProj  = scene.getProjMatrix();
  const D3DXVECTOR3      camPos = pdus.getPos();
  const D3DXMATRIX       mWorld = getWorldMatrix();
  const D3DCOLORVALUE    color  = getColor();

  V(m_effect->SetTechnique( m_renderWith1LightNoTextureHandle));
  V(m_effect->SetVector(    m_materialDiffuseColorHandle, (D3DXVECTOR4*)&color));

  D3DXVECTOR3 vEyePt = unitVector(camPos);

  V(m_effect->SetValue(m_lightDirHandle, &vEyePt, sizeof(D3DXVECTOR3)));

  // Rotate arrow model to point towards origin
  D3DXMATRIXA16 worldViewProj = mWorld * mView * mProj;

  V(m_effect->SetMatrix(m_worldViewProjectionHandle, &worldViewProj));
  V(m_effect->SetMatrix(m_worldHandle, &mWorld));
}

void D3LightControl::createEffect() {
  const char *effectSourceText =
      "float4   g_MaterialDiffuseColor;    // Material's diffuse color                             \r\n"
      "float3   g_LightDir;                // Light's direction in world space                     \r\n"
      "float4x4 g_mWorld;                  // World matrix for object                              \r\n"
      "float4x4 g_mWorldViewProjection;    // World * View * Projection matrix                     \r\n"
      "                                                                                            \r\n"
      "struct VS_OUTPUT                                                                            \r\n"
      "{                                                                                           \r\n"
      "    float4 Position   : POSITION;   // vertex position                                      \r\n"
      "    float4 Diffuse    : COLOR0;     // vertex diffuse color                                 \r\n"
      "};                                                                                          \r\n"
      "                                                                                            \r\n"
      "VS_OUTPUT RenderWith1LightNoTextureVS( float4 vPos    : POSITION,                           \r\n"
      "                                       float3 vNormal : NORMAL )                            \r\n"
      "{                                                                                           \r\n"
      "    VS_OUTPUT Output;                                                                       \r\n"
      "                                                                                            \r\n"
      "    // Transform the position from object space to homogeneous projection space             \r\n"
      "    Output.Position = mul(vPos, g_mWorldViewProjection);                                    \r\n"
      "                                                                                            \r\n"
      "    // Transform the normal from object space to world space                                \r\n"
      "    float3 vNormalWorldSpace;                                                               \r\n"
      "    vNormalWorldSpace = normalize(mul(vNormal, (float3x3)g_mWorld)); // normal (world space)\r\n"
      "                                                                                            \r\n"
      "    // Compute simple directional lighting equation                                         \r\n"
      "    Output.Diffuse.rgb = g_MaterialDiffuseColor * max(0,dot(vNormalWorldSpace, g_LightDir));\r\n"
      "    Output.Diffuse.a = 1.0f;                                                                \r\n"
      "                                                                                            \r\n"
      "    return Output;                                                                          \r\n"
      "}                                                                                           \r\n"
      "                                                                                            \r\n"
      "float4 RenderWith1LightNoTexturePS(float4 Diffuse : COLOR0) : COLOR0                        \r\n"
      "{                                                                                           \r\n"
      "    return Diffuse;                                                                         \r\n"
      "}                                                                                           \r\n"
      "                                                                                            \r\n"
      "technique RenderWith1LightNoTexture                                                         \r\n"
      "{                                                                                           \r\n"
      "    pass P0                                                                                 \r\n"
      "    {                                                                                       \r\n"
      "        VertexShader = compile vs_2_0 RenderWith1LightNoTextureVS();                        \r\n"
      "        PixelShader  = compile ps_2_0 RenderWith1LightNoTexturePS();                        \r\n"
      "    }                                                                                       \r\n"
      "}                                                                                           \r\n"
      ;

  StringArray compilerErrors;
  m_effect = getScene().compileEffect(effectSourceText, compilerErrors);
  if(m_effect == NULL) {
    showWarning(compilerErrors.toString(_T("\n")));
    return;
  }

  // Save technique handles for use when rendering
  m_renderWith1LightNoTextureHandle = m_effect->GetTechniqueByName( "RenderWith1LightNoTexture"    );
  m_materialDiffuseColorHandle      = m_effect->GetParameterByName( NULL, "g_MaterialDiffuseColor" );
  m_lightDirHandle                  = m_effect->GetParameterByName( NULL, "g_LightDir"             );
  m_worldHandle                     = m_effect->GetParameterByName( NULL, "g_mWorld"               );
  m_worldViewProjectionHandle       = m_effect->GetParameterByName( NULL, "g_mWorldViewProjection" );
}
