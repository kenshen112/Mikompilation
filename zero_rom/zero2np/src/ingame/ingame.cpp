#include "ingame.h"
#include "logging/logging.h"

INGAME_WRK ingame_wrk;

INGAME_WRK::INGAME_WRK()
{
}

void InitCostume()
{
  SetPlyrMdlNo(0);
  SetSisterMdlNo(1);
  SetPlyrAcsNo(-1);
  SetSisterAcsNo(-1);
}

static void IngameWrkInitNotPlayData()
{
}

void IngameWrkInit(int chapter_no, int difficultly_label)
{
  char iVal;
  char iValue;

  iVal = chapter_no;

  if (iVal < 25)
  {
    if (iVal < 0)
    {
      // Need to set the FMT string stuff they used
      printMessage("GAME", "Set Value is Illegal");
    }
  }

  iValue = difficultly_label;

  if (iValue < 4)
  {
    if (iValue < 0)
    {
      // Need to set the FMT string stuff they used
      printMessage("GAME", "Set Value is Illegal");
    }
  }

  ingame_wrk.clear_save_flg = 0;

  ingame_wrk.mClearCnt = 0;
  ingame_wrk.mDifficulty = iValue;

  //CameraPowerUp.Init();
  //CNEquipTraySave.Init();
  IngameWrkInitNotPlayData();
}
