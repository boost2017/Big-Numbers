#include "stdafx.h"
#include "EndGameUtil.h"
#include "EndGameKeyCodec.h"

#define MININDEX 2

EndGamePosIndex EndGameKeyDefinition4Men2Pawns::keyToIndex(EndGameKey key) const {
  return TWO_PAWNS_4MEN_INDEX(key) - MININDEX;
}

EndGameKey EndGameKeyDefinition4Men2Pawns::indexToKey(EndGamePosIndex index) const {
  index += MININDEX;
  EndGameKey result;
  SETPIT(         result, index   );
  SETPAWN2POS(    result, index, 3);
  SETPAWN1POS(    result, index, 2);
  SETKK_WITH_PAWN(result, index   );
  result.p3IndexToPawn2Pos();
  return result;
}
