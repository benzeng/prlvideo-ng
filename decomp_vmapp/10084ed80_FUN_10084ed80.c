
undefined8 FUN_10084ed80(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != param_2) && (lVar3 = FUN_10084b950(param_1), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_10084b410(param_4);
    iVar2 = FUN_10084b410(param_1);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      FUN_100887ce0(3,0x77,0x6e,"bn_mod.c",0x121);
      return 0;
    }
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 == 0) {
      iVar1 = FUN_10084fd80(param_1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    else {
      iVar2 = FUN_10084ffd0(param_1,param_1,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - iVar1;
    }
    iVar1 = FUN_10084bf60(param_1,param_4);
  } while ((iVar1 < 0) || (iVar1 = FUN_100847e90(param_1,param_1,param_4), iVar1 != 0));
  return 0;
}

