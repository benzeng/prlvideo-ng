
void FUN_100346610(long param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 3) {
    return;
  }
  if (param_3 == 2) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319c40(uVar1);
    uVar2 = 0xc;
  }
  else {
    if (param_3 != 1) goto LAB_10034667d;
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319c40(uVar1);
    uVar2 = 0xb;
  }
  FUN_10032eb10(uVar1,uVar2,0);
LAB_10034667d:
  if (param_4 == 4) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319c40(uVar1);
    uVar2 = 0xe;
  }
  else {
    if (param_4 != 3) {
      return;
    }
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319c40(uVar1);
    uVar2 = 0xd;
  }
  FUN_10032eb10(uVar1,uVar2,0);
  return;
}

