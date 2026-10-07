
void FUN_10038db60(float *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = DAT_100b3e820;
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar3 = param_2[1];
  fVar6 = (float)(iVar1 - iVar2);
  iVar4 = param_2[3];
  fVar7 = (float)(iVar3 - iVar4);
  *param_1 = DAT_100b3e820 / fVar6;
  param_1[5] = fVar5 / fVar7;
  param_1[10] = 1.0;
  param_1[0xf] = 1.0;
  param_1[3] = (float)-(iVar1 + iVar2) / fVar6;
  param_1[7] = (float)-(iVar3 + iVar4) / fVar7;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[6] = 0.0;
  param_1[4] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  return;
}

