#pragma once
#include "basic_types.h"
#include <array>

typedef struct
{
  u_char num;
  std::array<unsigned char, 10> result;
  std::array<float[4], 10> p;
} PP_JUDGE;