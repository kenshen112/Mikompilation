#pragma once
#include "basic_types.h"

enum ENE_RELASE_TYPE
{
  ENE_RELEASE_NO_RELEASE = 0,
  ENE_RELEASE_TAKE_PICT = 1,
  ENE_RELEASE_TIME_OUT = 2,
  ENE_RELEASE_DIST = 3,
  ENE_RELEASE_DEAD = 4,
  ENE_RELEASE_REQ = 5,
  ENE_RELEASE_MAX_NO = 6,
  ENE_RELEASE_FORCE_DWORD = -1
};

struct ENE_DAT_COMMON
{
  int adpcm_no;
  float px;
  float py;
  float pz;
  int se_no;
  u_short mdl_no;
  u_short anm_no;
  u_short alg_no;
  u_short point_base;
  u_short dir;
  u_char neck_ctl;
  u_int attr;
  float near;
  float far;
  u_char blg_r;
  u_char blg_g;
  u_char blg_b;
  u_char balp;
  u_char ghost_list_no;
  u_char ghost_list_no_sp;
  u_char def_type[2];
  u_char def_size[2];
  u_char dih_type;
};

struct ENE_DAT
{
  ENE_DAT_COMMON cmn;
  u_short dst_gthr;
  u_char way_gthr;
  u_char atk_ptn;
  float atk_rng;
  float hit_rng;
  float chance_rng;
  int dead_adpcm;
  short int hit_adjx;
  u_char hint_pic;
  u_char aura_alp;
  u_short trgt_chg;
  u_short hp;
  u_short atk_p;
  u_short atk_h;
  u_char atk;
  u_char atk_tm;
  u_char wspd;
  u_char rspd;
  u_char rotsp;
  u_short hitbk;
  u_int hp_recv_wait;
  float hp_recv_vol;
  short int fly_type[3];
  short int child_ene[3];
};

struct AENE_DAT
{
  ENE_DAT_COMMON cmn;
  u_char dat_no;
  u_char soul_no;
  u_short adpcm_tm;
  short int next;
  u_short chgattr;
  float rng;
  short int time;
  int se_foot;
};