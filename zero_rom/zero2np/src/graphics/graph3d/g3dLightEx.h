#pragma once
//#include "basic_types.h"
#include "gra3d.h"
#include "sce_types.h"

struct G3DLIGHT
{
  sceVu0FVECTOR vDiffuse;
  sceVu0FVECTOR vSpecular;
  sceVu0FVECTOR vAmbient;
  sceVu0FVECTOR vPosition;
  sceVu0FVECTOR vDirection;
  G3DLIGHTTYPE Type;
  float fAngleInside;
  float fAngleOutside;
  float fMaxRange;
  float fMinRange;
  float fFalloff;
  float afPad0[2];
};