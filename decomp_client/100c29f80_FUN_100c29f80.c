
undefined8 FUN_100c29f80(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != param_2) && (lVar3 = FUN_100c26b50(param_1), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_100c26610(param_4);
    iVar2 = FUN_100c26610(param_1);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      FUN_100c62ee0(3,0x77,0x6e,"bn_mod.c",0x121);
      return 0;
    }
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 == 0) {
      iVar1 = FUN_100c2af80(param_1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    else {
      iVar2 = FUN_100c2b1d0(param_1,param_1,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - iVar1;
    }
    iVar1 = FUN_100c27160(param_1,param_4);
  } while ((iVar1 < 0) || (iVar1 = FUN_100c23090(param_1,param_1,param_4), iVar1 != 0));
  return 0;
}

