
undefined8 FUN_100c23090(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar4 = 0;
    lVar3 = param_3;
    lVar5 = param_2;
    if (*(int *)(param_3 + 0x10) == 0) goto LAB_100c230cc;
  }
  else {
    lVar3 = param_2;
    lVar5 = param_3;
    if (*(int *)(param_3 + 0x10) != 0) {
LAB_100c230cc:
      iVar1 = *(int *)(lVar3 + 8);
      if (*(int *)(lVar3 + 8) <= *(int *)(lVar5 + 8)) {
        iVar1 = *(int *)(lVar5 + 8);
      }
      if ((*(int *)(param_1 + 0xc) < iVar1) && (lVar2 = FUN_100c26b00(param_1), lVar2 == 0)) {
        return 0;
      }
      iVar1 = FUN_100c27100(lVar5,lVar3);
      if (iVar1 < 0) {
        iVar1 = FUN_100c22be0(param_1,lVar3,lVar5);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        return 0;
      }
      iVar1 = FUN_100c22be0(param_1,lVar5,lVar3);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 1;
      }
      return 0;
    }
    uVar4 = 1;
  }
  iVar1 = FUN_100c22e70(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    return 1;
  }
  return 0;
}

