#pragma once
#include "MapLight.h"
#include "basic_types.h"
#include "player.h"

struct FLY_DATA
{
  u_char attr;
  u_char alp;
  u_short mdl_no;
  u_short anm_no;
  u_short dmg;
  u_short hit_rng;
  u_short cond;
  u_int blifetime;
  u_short chg_cnt;
  float fstmove;
  float fstrot;
  float fdist;
  float fmove;
  float frot;
  float ndist;
  float nmove;
  float nrot;
};

struct FLY_WRK
{
  u_short sta;
  void *ew;
  FLY_DATA *dat;
  PLCMN_WRK *target;
  GRA3DLIGHTDATA light;
  sceVu0FVECTOR npos;
  sceVu0FVECTOR opos;
  sceVu0FVECTOR nrot;
  sceVu0FVECTOR tpos;
  sceVu0FVECTOR trot;
  float spd;
  u_int life_time;
  u_int life_cnt;
  float trace_ang;
  u_int trace_time;
  u_short now_cnt;
  u_char alp;
  void *efpw;
  void *ani_ctrl;
  int mdl_p;
  int mdl_no;
  int anm_p;
  int anm_no;
  int init_flow;
  float adjp_cnt;
  float adjp_span;
  float adjp_add;
  float adjp_ang;
  float adjv[4];
};