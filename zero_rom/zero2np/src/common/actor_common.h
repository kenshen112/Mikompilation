#pragma once
#include "basic_types.h"
#include "sce_types.h"

struct MOVE_BOX
{
  float mloop;
  sceVu0FVECTOR pos;
  sceVu0FVECTOR bpos;
  sceVu0FVECTOR mv;
  sceVu0FVECTOR bmv;
  sceVu0FVECTOR rot;
  sceVu0FVECTOR brot;
  sceVu0FVECTOR spd;
  sceVu0FVECTOR rspd;
  sceVu0FVECTOR trot;
};

struct SND_3D_SET
{
  sceVu0FVECTOR *pos;
  sceVu0FVECTOR *vel;
  sceVu0FVECTOR *dir;
};

struct STATUS_DAT
{
  u_long sta;
  u_long sta_old;
  u_long mvsta;
  u_short hp;
  u_short sp;
  u_short hpmax;
  u_short spmax;
  u_short hp_recover_time;
  u_short sp_recover_time;
  u_short sp_down_fl;
  u_short dmg;
  u_short rhspdmg;
  u_short rhpdmg;
  u_short rspdmg;
  u_short dmg_old;
  u_short dmg_type;
  u_char dmg_cam_flag;
  u_short dwalk_tm;
  u_short cond;
  u_short cond_old;
  u_short cond_tm;
  u_short invisible_timer;
};

struct MPOS
{
  sceVu0FVECTOR p0;
  sceVu0FVECTOR p1;
  sceVu0FVECTOR p2;
  sceVu0FVECTOR p3;
  sceVu0FVECTOR p4;
  sceVu0FVECTOR p5;
  sceVu0FVECTOR p6;
  sceVu0FVECTOR p7;
  sceVu0FVECTOR p8;
  sceVu0FVECTOR p9;
};

typedef struct
{
  u_char area_no;
  u_char area_old;
  u_char room_id;
  u_char room_old;
  u_char camera_no;
  u_char camera_no_old;
  float hight;
} PROOM_INFO;

struct PLCMN_WRK
{
  MOVE_BOX mbox;
  STATUS_DAT st;
  PROOM_INFO pr_info;
  u_char mode;
  u_char atk_eneno;
  u_char atk_pos;
  u_char atk_rot;
  float near_ene_dist;
  float near_ene_dist_old;
  u_char near_ene_no;
  short int floor;
  sceVu0FVECTOR headpos;
};