#pragma once

#include "basic_types.h"
#include "plyr_mdl.h"
#include <bitset>

typedef enum
{
  GPHASE_CONTINUE = 0,
  GPHASE_END = 1,
  GPHASE_NOFRAME = 2
} GPHASE_ENUM;

struct INGAME_WRK
{
  // Note the symbols dictate these are CVariable
  std::bitset<24> mChapterNo;
  std::bitset<3> mDifficulty;
  std::bitset<99> mClearCnt;
  u_char clear_save_flg;

 private:
  int mMenuLockCnt;
  int mPauseLockCnt;

 public:
  //INGAME_WRK &operator=();
  INGAME_WRK();
  void Init();
  void MenuLock();
  void MenuUnlock();
  int MenuIsLocked();
  void PauseLock();
  void PauseUnlock();
  int PauseIsLocked();
};

extern INGAME_WRK ingame_wrk;

void InitCostume();
void IngameWrkInit(int chapter_no, int difficultly_label);
