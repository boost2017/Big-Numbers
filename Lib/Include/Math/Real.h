#pragma once

#include <Unicode.h>
#include <NumberInterval.h>

//#define LONGDOUBLE // defined in configurations "Debug long double" and "Release long double"
#ifdef LONGDOUBLE

#include "Double80.h"
typedef Double80 Real;

#else

#include "Double64.h"
typedef double Real;

#endif

typedef CompactArray<Real>   CompactRealArray;
typedef NumberInterval<Real> RealInterval;

typedef enum {
  RADIANS
 ,DEGREES
 ,GRADS
} TrigonometricMode;

Real csc(                 const Real &x);
Real sec(                 const Real &x);
Real acsc(                const Real &x);
Real asec(                const Real &x);

Real sinDegrees(          const Real &x);
Real cosDegrees(          const Real &x);
Real tanDegrees(          const Real &x);
Real cotDegrees(          const Real &x);
Real asinDegrees(         const Real &x);
Real acosDegrees(         const Real &x);
Real atanDegrees(         const Real &x);
Real atan2Degrees(        const Real &y, const Real &x);
Real acotDegrees(         const Real &x);

Real cscDegrees(          const Real &x);
Real secDegrees(          const Real &x);
Real acscDegrees(         const Real &x);
Real asecDegrees(         const Real &x);

Real sinGrads(            const Real &x);
Real cosGrads(            const Real &x);
Real tanGrads(            const Real &x);
Real cotGrads(            const Real &x);
Real asinGrads(           const Real &x);
Real acosGrads(           const Real &x);
Real atanGrads(           const Real &x);
Real atan2Grads(          const Real &y, const Real &x);
Real acotGrads(           const Real &x);

Real cscGrads(            const Real &x);
Real secGrads(            const Real &x);
Real acscGrads(           const Real &x);
Real asecGrads(           const Real &x);

Real sin(                 const Real &x, TrigonometricMode mode);
Real cos(                 const Real &x, TrigonometricMode mode);
Real tan(                 const Real &x, TrigonometricMode mode);
Real cot(                 const Real &x, TrigonometricMode mode);
Real asin(                const Real &x, TrigonometricMode mode);
Real acos(                const Real &x, TrigonometricMode mode);
Real atan(                const Real &x, TrigonometricMode mode);
Real atan2(               const Real &y, const Real &x, TrigonometricMode mode);
Real acot(                const Real &x, TrigonometricMode mode);
Real csc(                 const Real &x, TrigonometricMode mode);
Real sec(                 const Real &x, TrigonometricMode mode);
Real acsc(                const Real &x, TrigonometricMode mode);
Real asec(                const Real &x, TrigonometricMode mode);

Real gamma(               const Real &x);
Real lnGamma(             const Real &x);
Real gammaStirling(       const Real &x);
Real lnGammaStirling(     const Real &x);
Real gauss(               const Real &x);
Real norm(                const Real &x);
Real probitFunction(      const Real &x);
Real errorFunction(       const Real &x);
Real inverseErrorFunction(const Real &x);
Real fac(                 const Real &x);

// Assume x >= 0
Real lowerIncGamma(          const Real &a,  const Real &x);
Real chiSquaredDensity(      const Real &df, const Real &x);
Real chiSquaredDistribution( const Real &df, const Real &x);

Real binomial(            const Real &x,      const Real &y    );

// use _standardRandomGenerator declared in Random.h
Real randReal();
Real randReal(            const Real &lower,  const Real &upper);
// mean and standardDeviation. use _standardRandomGenerator
Real randomGaussian(      const Real &mean,   const Real &s    );

void setToRandom(Real &x);

// poly(x)  = a[n]x^n + a[n-1]x^(n-1)+...+a[1]x + a[0]; n = degree
Real poly( const Real &x, int degree, const Real *coef);
// poly1(x) = a[0]x^n + a[1]x^(n-1)+...+a[n-1]x + a[n]; n = degree
Real poly1(const Real &x, int degree, const Real *coef);

inline Real getRealNaN() {
#ifdef LONGDOUBLE
  return Double80::DBL80_NAN;
#else
  return std::numeric_limits<double>::quiet_NaN();
#endif

}

#ifndef LONGDOUBLE
#define strtor strtod
#define wcstor wcstod
#else // LONGDOUBLE
#define strtor strtod80
#define wcstor wcstod80
#endif // LONGDOUBLE

#ifdef _UNICODE
#define _tcstor wcstor
#else
#define _tcstor strtor
#endif // _UNICODE

#include "PragmaLib.h"
