#pragma once
#include <array>

#include "actor_common.h"
#include "basic_types.h"
#include "effect_sub.h"
#include "enemy_act.h"
#include "enemy_dat.h"
#include "fly_ctrl.h"
#include "sce_types.h"

enum ENE_STATUS
{
  ENE_STATUS_NO_USE = 0,
  ENE_STATUS_LOADING = 1,
  ENE_STATUS_WAIT_ANI_CTRL = 2,
  ENE_STATUS_READY = 3,
  ENE_STATUS_ACT = 4,
  ENE_STATUS_RELEASE = 5,
  ENE_STATUS_FORCE_DWORD = -1
};

struct ENE_WRK
{
  float bep[4];
  float neck_rot[4];
  float adjp[4];
  MPOS mpos;
  ENEALG_WRK alg;
  PP_JUDGE ppj;
  MOVE_BOX mbox;
  //CSpiritGage spirit_gage;
  STATUS_DAT st;
  ENE_DAT *dat;
  AENE_DAT *aie;
  float dist_p_e[2];
  float dist_p_e_o[2];
  float dist_c_e;
  u_int hp_recv_tm;
  float hp_recv_pt;
  float reso;
  float wlk_reso_chg;
  float wlk_reso;
  PLCMN_WRK *target;
  float tr_frate;
  float tr_common;
  void *pdf;
  void *pdf2;
  float d_pd;
  float d_pd2;
  float d_pda;
  float d_pda2;
  float d_pdc;
  float d_pdc2;
  float d_mpd;
  float d_mpd2;
  void *nee;
  float nee_rate;
  float nee_size;
  u_int nee_col;
  void *efpw;
  float effw;
  float slow_hb_reso;
  int stream_id;
  int status;
  void *ani_ctrl_p;
  u_int attr;
  float directionaldiffuse[4];
  ENE_DAT_COMMON *cmn_dat;
  int anm_jibaku_p;
  int se_bank_jibaku_no;
  int se_bank_no;
  FLY_WRK *fw[3][5];
  void *wrkp[3];
  ENE_RELASE_TYPE rel_type;
  //CWaitVariable<short int> adpcm_tm;
  short int reso_tm;
  u_short atk_tm;
  u_short atk_type;
  short int combo_time;
  u_short tr_time;
  u_short tr2_cnt;
  u_short in_finder_tm;
  short int dat_no;
  short int fp[2];
  short int dist_in_tm[2];
  short int stm_slow;
  short int stm_view;
  short int mahi_total_time;
  short int mahi_cnt;
  short int mahi_one_stop_time;
  short int mahi_one_act_time;
  unsigned char bWithSearcher : 1;
  u_char anime_no;
  u_char target_n;
  u_char tr_max;
  u_char tr2_rate_alg;
  u_char tr2_base;
  u_char tr2_freq;
  u_char tr2_add;
  u_char tr_rate;
  u_char tr_rate_in;
  u_char tr_rate_out;
  u_char tr_rate_alg;
  u_char tr_rate_alg_sp;
  u_char ppj_check;
  u_char type;
  u_char act_no;
  u_char recog_tm;
  u_char room_no;
  u_char wlk_reso_frm;
  u_char wlk_reso_wait;
  char act_flg;
  char slow_hb_wait_frame;
  char slow_hb_frame;
  int ani_reso;
  char combo_counter;
  char combo_sb_counter;
};

extern std::array<ENE_WRK, 10> ene_wrk;