
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dcc70(int *param_1,int param_2,long param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  
  param_2 = param_2 * 0x40;
  iVar6 = *(int *)(param_3 + (ulong)(param_2 + 0x110) * 4);
  iVar2 = *(int *)(param_3 + (ulong)(param_2 + 0x111) * 4);
  uVar3 = *(uint *)(param_3 + (ulong)(param_2 + 0x112) * 4);
  if ((iVar6 != 3) || (iVar7 = 0x55, iVar2 != 3)) {
    if (uVar3 < 2) {
      if (iVar6 == 1) {
        iVar7 = (uint)(iVar2 != 1) << 4;
      }
      else {
        iVar6 = 4;
        iVar7 = 0x14;
LAB_1003dccf6:
        if (iVar2 == 1) {
          iVar7 = iVar6;
        }
      }
    }
    else {
      if (iVar6 != 1) {
        iVar6 = 5;
        iVar7 = 0x15;
        goto LAB_1003dccf6;
      }
      iVar7 = 0x11;
      if (iVar2 == 1) {
        iVar7 = 1;
      }
    }
  }
  if ((*param_1 != iVar7) || ((bool)(char)param_1[1] != (uVar3 != 0))) {
    *param_1 = iVar7;
    *(bool *)(param_1 + 1) = uVar3 != 0;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  }
  iVar6 = *(int *)(param_3 + (ulong)(param_2 + 0x10d) * 4);
  if (param_1[2] != iVar6) {
    param_1[2] = iVar6;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  }
  iVar6 = *(int *)(param_3 + (ulong)(param_2 + 0x10e) * 4);
  if (param_1[3] != iVar6) {
    param_1[3] = iVar6;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  iVar6 = *(int *)(param_3 + (ulong)(param_2 + 0x119) * 4);
  if (param_1[4] != iVar6) {
    param_1[4] = iVar6;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
  }
  fVar4 = *(float *)(param_3 + (ulong)(param_2 + 0x113) * 4);
  if ((fVar4 != 3.088944e-09) && (fVar4 != 1.9769242e-07)) {
    if (((float)param_1[5] != fVar4) || (NAN((float)param_1[5]) || NAN(fVar4))) {
      param_1[5] = (int)fVar4;
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x10;
    }
  }
  iVar6 = *(int *)(param_3 + (ulong)(param_2 + 0x115) * 4);
  if (param_1[6] != iVar6) {
    param_1[6] = iVar6;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x20;
  }
  if (param_1[7] != 4) {
    param_1[7] = 4;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x40;
  }
  local_1c = *(undefined4 *)(param_3 + (ulong)(param_2 + 0x10f) * 4);
  local_38 = 0;
  uStack_30 = 0;
  FUN_10038e060(&local_38,&local_1c);
  cVar5 = FUN_10038e320(param_4);
  if (cVar5 == '\0') {
    cVar5 = FUN_10038e310(param_4);
    pfVar1 = (float *)(param_1 + 9);
    if (cVar5 == '\0') {
      iVar6 = _memcmp(pfVar1,&local_38,0x10);
      if (iVar6 == 0) goto LAB_1003dce66;
      *(undefined8 *)(param_1 + 0xb) = uStack_30;
      *(undefined8 *)pfVar1 = local_38;
    }
    else {
      if ((*pfVar1 == (float)local_38) && (!NAN(*pfVar1) && !NAN((float)local_38))) {
        if (((float)param_1[10] == uStack_30._4_4_) &&
           (!NAN((float)param_1[10]) && !NAN(uStack_30._4_4_))) goto LAB_1003dce66;
      }
      param_1[9] = (int)(float)local_38;
      param_1[10] = (int)uStack_30._4_4_;
    }
  }
  else {
    if (((float)param_1[9] == uStack_30._4_4_) && (!NAN((float)param_1[9]) && !NAN(uStack_30._4_4_))
       ) goto LAB_1003dce66;
    param_1[9] = (int)uStack_30._4_4_;
  }
  *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 1;
LAB_1003dce66:
  if (((float)param_1[0xd] != 0.0) || (NAN((float)param_1[0xd]))) {
    param_1[0xd] = 0;
    *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 2;
  }
  if (((float)param_1[0xe] != _DAT_100b400f0) || (NAN((float)param_1[0xe]) || NAN(_DAT_100b400f0)))
  {
    param_1[0xe] = 0x7f7fffff;
    *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 4;
  }
  return;
}

