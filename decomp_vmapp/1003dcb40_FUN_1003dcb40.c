
void FUN_1003dcb40(int *param_1,long param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  
  if ((*param_1 != *(int *)(param_2 + 4)) || ((char)param_1[1] == '\0')) {
    *param_1 = *(int *)(param_2 + 4);
    *(undefined1 *)(param_1 + 1) = 1;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  }
  if (param_1[2] != *(int *)(param_2 + 8)) {
    param_1[2] = *(int *)(param_2 + 8);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  }
  if (param_1[3] != *(int *)(param_2 + 0xc)) {
    param_1[3] = *(int *)(param_2 + 0xc);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
  }
  if (param_1[4] != *(int *)(param_2 + 0x10)) {
    param_1[4] = *(int *)(param_2 + 0x10);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
  }
  fVar2 = *(float *)(param_2 + 0x14);
  if (((float)param_1[5] != fVar2) || (NAN((float)param_1[5]) || NAN(fVar2))) {
    param_1[5] = (int)fVar2;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x10;
  }
  if (param_1[6] != *(int *)(param_2 + 0x18)) {
    param_1[6] = *(int *)(param_2 + 0x18);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x20;
  }
  if (param_1[7] != *(int *)(param_2 + 0x1c)) {
    param_1[7] = *(int *)(param_2 + 0x1c);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x40;
  }
  cVar4 = FUN_10038e320(param_3);
  pfVar1 = (float *)(param_1 + 9);
  if (cVar4 == '\0') {
    iVar5 = _memcmp(pfVar1,(undefined8 *)(param_2 + 0x20),0x10);
    if (iVar5 == 0) goto LAB_1003dcc28;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)pfVar1 = uVar3;
  }
  else {
    fVar2 = *(float *)(param_2 + 0x2c);
    if ((*pfVar1 == fVar2) && (!NAN(*pfVar1) && !NAN(fVar2))) goto LAB_1003dcc28;
    param_1[9] = (int)fVar2;
  }
  *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 1;
LAB_1003dcc28:
  fVar2 = *(float *)(param_2 + 0x30);
  if (((float)param_1[0xd] != fVar2) || (NAN((float)param_1[0xd]) || NAN(fVar2))) {
    param_1[0xd] = (int)fVar2;
    *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 2;
  }
  fVar2 = *(float *)(param_2 + 0x34);
  if (((float)param_1[0xe] != fVar2) || (NAN((float)param_1[0xe]) || NAN(fVar2))) {
    param_1[0xe] = (int)fVar2;
    *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 4;
  }
  return;
}

