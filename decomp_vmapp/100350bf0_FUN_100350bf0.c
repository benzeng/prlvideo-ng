
int * FUN_100350bf0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*param_2 == 1) {
    param_1[0x1c] = 1;
  }
  else if (*param_2 == 2) {
    param_1[0x1c] = 0;
  }
  else {
    param_1[0x1c] = 2;
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_10038e0c0(&local_38,param_2 + 1);
  *(undefined8 *)(param_1 + 8) = local_38;
  *(undefined8 *)(param_1 + 10) = uStack_30;
  local_48 = 0;
  uStack_40 = 0;
  FUN_10038e0c0(&local_48,param_2 + 5);
  *(undefined8 *)(param_1 + 0xc) = local_48;
  *(undefined8 *)(param_1 + 0xe) = uStack_40;
  local_58 = 0;
  uStack_50 = 0;
  FUN_10038e0c0(&local_58,param_2 + 9);
  *(undefined8 *)(param_1 + 0x10) = local_58;
  *(undefined8 *)(param_1 + 0x12) = uStack_50;
  iVar1 = *param_2;
  if (iVar1 == 1) {
    *param_1 = param_2[0xd];
    param_1[1] = param_2[0xe];
    param_1[2] = param_2[0xf];
    param_1[3] = 0x3f800000;
    uVar2 = *(undefined8 *)(param_2 + 0x16);
    param_1[0x14] = param_2[0x15];
    *(undefined8 *)(param_1 + 0x15) = uVar2;
  }
  else if (iVar1 == 2) {
    *param_1 = param_2[0xd];
    param_1[1] = param_2[0xe];
    param_1[2] = param_2[0xf];
    param_1[3] = 0x3f800000;
    fVar6 = (float)param_2[0x12];
    fVar3 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar7 = (float)(DAT_100b44c98 / SQRT((double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3)));
    param_1[4] = (int)(fVar3 * fVar7);
    param_1[5] = (int)(fVar5 * fVar7);
    param_1[6] = (int)(fVar6 * fVar7);
    param_1[7] = 0x3f800000;
    uVar2 = *(undefined8 *)(param_2 + 0x16);
    param_1[0x14] = param_2[0x15];
    *(undefined8 *)(param_1 + 0x15) = uVar2;
    iVar1 = param_2[0x14];
    dVar4 = (double)_cos((double)((float)param_2[0x18] * DAT_100b39670));
    fVar6 = DAT_100b39670 * (float)param_2[0x19];
    param_1[0x18] = (int)(float)dVar4;
    dVar4 = (double)_cos((double)fVar6);
    param_1[0x19] = (int)(float)dVar4;
    param_1[0x1a] = iVar1;
  }
  else if (iVar1 == 3) {
    fVar6 = (float)param_2[0x12];
    fVar3 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar7 = (float)(DAT_100b44c98 / SQRT((double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3)));
    param_1[4] = (int)(fVar3 * fVar7);
    param_1[5] = (int)(fVar5 * fVar7);
    param_1[6] = (int)(fVar6 * fVar7);
    param_1[7] = 0x3f800000;
  }
  return param_1;
}

