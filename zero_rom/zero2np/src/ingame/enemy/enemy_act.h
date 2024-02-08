#pragma once
#include "basic_types.h"

typedef int P_INT;

struct ENEALG_WRK
{
  long int comm_add_top;
  u_long stack_b[16];
  u_long *stack_p;
  long int bcomm_add_top;
  P_INT bcomm_add;
  P_INT comm_add;
  float wait_time;
  float loop[2];
  float loop_tr[2];
  float bwait_time;
  u_char pos_no_tr[2];
  u_char cnt[2];
  u_char idx;
  u_char job_no;
  u_char pos_no;
  u_char flag;
  u_char branch;
  u_char bjob_no;
  u_char bpos_no;
};