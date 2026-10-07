
undefined8 FUN_10085cb90(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (lVar2 = FUN_10084b950(param_2,param_1 + 0xd), lVar2 == 0)) {
    return 0;
  }
  lVar2 = 0;
  if (param_3 != 0 || param_4 != 0) {
    if (*(long *)(*param_1 + 0x120) == 0) {
      if ((param_3 != 0) && (lVar2 = FUN_10084b950(param_3,param_1 + 0x13), lVar2 == 0)) {
        return 0;
      }
      lVar2 = 0;
      if (param_4 != 0) {
        lVar3 = FUN_10084b950(param_4,param_1 + 0x16);
        lVar2 = 0;
        if (lVar3 == 0) {
          return 0;
        }
      }
    }
    else {
      lVar2 = 0;
      if ((param_5 == 0) && (param_5 = FUN_10084c820(), lVar2 = param_5, param_5 == 0)) {
        return 0;
      }
      if (param_3 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_3,param_1 + 0x13,param_5);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_10085cca3;
      }
      if (param_4 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_4,param_1 + 0x16,param_5);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_10085cca3;
      }
    }
  }
  uVar4 = 1;
LAB_10085cca3:
  if (lVar2 != 0) {
    FUN_10084c8b0(lVar2);
  }
  return uVar4;
}

