#pragma once
#include "g3dLightEx.h"
#include "gra3d.h"
#include <array>

struct GRA3DLIGHTDATA
{
  sceVu0FVECTOR vAmbient;
  std::array<G3DLIGHT, 39> aLight;
  std::array<GRA3DLIGHTSTATUS, 39> aStatus;
  std::array<int, 3> aiNumInitial;
  int aiPad[1];
};