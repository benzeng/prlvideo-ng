
undefined8
FUN_10085d220(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(*param_1 + 0x120) == 0) {
    if ((param_3 != 0) && (lVar2 = FUN_10084b950(param_3,param_2 + 8), lVar2 == 0)) {
      return 0;
    }
    if ((param_4 != 0) && (lVar2 = FUN_10084b950(param_4,param_2 + 0x20), lVar2 == 0)) {
      return 0;
    }
    lVar2 = 0;
    if (param_5 != 0) {
      lVar3 = FUN_10084b950(param_5,param_2 + 0x38);
      lVar2 = 0;
      if (lVar3 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar2 = 0;
    if ((param_6 == 0) && (lVar2 = FUN_10084c820(), param_6 = lVar2, lVar2 == 0)) {
      return 0;
    }
    if (param_3 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_3,param_2 + 8,param_6);
      uVar4 = 0;
      if (iVar1 == 0) goto LAB_10085d371;
    }
    if (param_4 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_4,param_2 + 0x20,param_6);
      uVar4 = 0;
      if (iVar1 == 0) goto LAB_10085d371;
    }
    if (param_5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_5,param_2 + 0x38,param_6);
      uVar4 = 0;
      if (iVar1 == 0) goto LAB_10085d371;
    }
  }
  uVar4 = 1;
LAB_10085d371:
  if (lVar2 != 0) {
    FUN_10084c8b0();
  }
  return uVar4;
}

