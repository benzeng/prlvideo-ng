
undefined8 FUN_100c22b40(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_3 + 0x10)) {
    uVar2 = FUN_100c22e70(param_1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  else {
    lVar3 = param_3;
    if (iVar1 == 0) {
      lVar3 = param_2;
      param_2 = param_3;
    }
    iVar1 = FUN_100c27100(lVar3,param_2);
    if (iVar1 < 0) {
      iVar1 = FUN_100c22be0(param_1,param_2,lVar3);
      uVar2 = 0;
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 1;
        uVar2 = 1;
      }
    }
    else {
      iVar1 = FUN_100c22be0(param_1,lVar3,param_2);
      uVar2 = 0;
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

