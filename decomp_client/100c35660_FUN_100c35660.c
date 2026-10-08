
ulong FUN_100c35660(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_3 + 1) == 1) {
    if (*(long *)*param_3 == 1) {
      lVar3 = FUN_100c26b50(param_1,param_2);
      return (ulong)(lVar3 != 0);
    }
  }
  else if (*(int *)(param_3 + 1) == 0) {
    uVar4 = FUN_100c26db0(param_1,1);
    return uVar4;
  }
  FUN_100c27c60(param_5);
  lVar3 = FUN_100c27e20(param_5);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_100c34010(lVar3,param_2,param_4);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      iVar1 = FUN_100c26610(param_3);
      if (-1 < iVar1 + -2) {
        iVar1 = iVar1 + -1;
        do {
          iVar2 = FUN_100c34820(lVar3,lVar3,param_4,param_5);
          if (iVar2 == 0) {
            uVar4 = 0;
            goto LAB_100c3578a;
          }
          iVar1 = iVar1 + -1;
          iVar2 = FUN_100c27360(param_3,iVar1);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_100c345d0(lVar3,lVar3,param_2,param_4,param_5), iVar2 == 0)) {
            uVar4 = 0;
            goto LAB_100c3578a;
          }
        } while (0 < iVar1);
      }
      lVar3 = FUN_100c26b50(param_1,lVar3);
      uVar4 = (ulong)(lVar3 != 0);
    }
  }
LAB_100c3578a:
  FUN_100c27d40(param_5);
  return uVar4;
}

