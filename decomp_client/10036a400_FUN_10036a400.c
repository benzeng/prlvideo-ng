
void FUN_10036a400(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    FUN_10036a0e0(param_1);
    return;
  case 1:
    if (**(int **)(param_4 + 0x10) != 1) {
      FUN_100369db0(param_1);
      return;
    }
    break;
  case 2:
    iVar1 = *(int *)(*(long *)(param_4 + 0x10) + 0x10);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
    }
    iVar2 = FUN_100323e20(uVar3);
    if (iVar1 != iVar2) {
      return;
    }
    bVar4 = true;
    if (*(int *)(param_1 + 0x84) != 0) {
      bVar4 = *(int *)(param_1 + 0x80) == 0;
    }
    uVar3 = 0;
    goto LAB_10036a500;
  case 3:
    if (**(int **)(param_4 + 8) != 0x30000004) {
      return;
    }
    if (**(int **)(param_4 + 0x10) != 0x3000000b) {
      return;
    }
    break;
  default:
    return;
  }
  bVar4 = true;
  uVar3 = 1;
LAB_10036a500:
  FUN_100369150(param_1,bVar4,uVar3);
  return;
}

