#pragma once

#include "actor_common.h"
#include "basic_types.h"
#include "g3dLightEx.h"
#include "n_equip_tray.h"
#include "sce_types.h"

struct CEneTracer
{
 private:
  //CWaitVariable<short int> mWaitCnt;
  //CWrkVariable<char,0,10> mTraceEne;

 public:
  //CEneTracer& operator=();
  CEneTracer();
  int Init();
  void Work();
  void Req(int iEneNo, int iFrame);
};

struct PLYR_WRK
{
  PLCMN_WRK cmn_wrk;
  u_char modedead;
  u_char anime_no;
  u_char charge_num;
  float charge_rate;
  float charge_deg;
  float frot_x;
  short int fp[2];
  u_short no_photo_tm;
  u_short shutter_tm;
  u_short vib_time_sm;
  u_short vib_time_bg;
  sceVu0FVECTOR spd;
  sceVu0FVECTOR old_spd;
  sceVu0FMATRIX fhp;
  float prot;
  u_short fene_tm;
  u_short bonus_sta;
  u_short avoid_tm;
  u_short avoid_flg;
  u_short avoid_st;
  u_short avoid_sp;
  u_char door_flg;
  u_short door_no;
  sceVu0FVECTOR bwp;
  sceVu0FVECTOR spot_pos;
  sceVu0FVECTOR spot_rot;
  G3DLIGHT fl;
  G3DLIGHT fl2;
  G3DLIGHT reflectionlight;
  float maplight_scale;
  SND_3D_SET s3d;
  float fl_pow;
  int finder_tm;
  char finder_lock_cnt;
  char move_lock_cnt;
  char action_lock_cnt;
  char shutter_lock_cnt;
  char run_lock_cnt;
  CEneTracer ene_tracer;
  int ane_curse_lock;
  float hit_rad;
  SHUTTER_CHANCE_STATE preShutterChanceState;
  SHUTTER_CHANCE_STATE nowShutterChanceState;
};

enum PLAYERFLASHLIGHTTYPE
{
  PFT_HAND = 0,
  PFT_STEP = 1,
  NUM_PLAYERFLASHLIGHTTYPE = 2
};