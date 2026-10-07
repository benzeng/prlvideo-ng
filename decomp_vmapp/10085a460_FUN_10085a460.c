
ulong FUN_10085a460(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_3 + 1) == 1) {
    if (*(long *)*param_3 == 1) {
      lVar3 = FUN_10084b950(param_1,param_2);
      return (ulong)(lVar3 != 0);
    }
  }
  else if (*(int *)(param_3 + 1) == 0) {
    uVar4 = FUN_10084bbb0(param_1,1);
    return uVar4;
  }
  FUN_10084ca60(param_5);
  lVar3 = FUN_10084cc20(param_5);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_100858e10(lVar3,param_2,param_4);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      iVar1 = FUN_10084b410(param_3);
      if (-1 < iVar1 + -2) {
        iVar1 = iVar1 + -1;
        do {
          iVar2 = FUN_100859620(lVar3,lVar3,param_4,param_5);
          if (iVar2 == 0) {
            uVar4 = 0;
            goto LAB_10085a58a;
          }
          iVar1 = iVar1 + -1;
          iVar2 = FUN_10084c160(param_3,iVar1);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_1008593d0(lVar3,lVar3,param_2,param_4,param_5), iVar2 == 0)) {
            uVar4 = 0;
            goto LAB_10085a58a;
          }
        } while (0 < iVar1);
      }
      lVar3 = FUN_10084b950(param_1,lVar3);
      uVar4 = (ulong)(lVar3 != 0);
    }
  }
LAB_10085a58a:
  FUN_10084cb40(param_5);
  return uVar4;
}

