
undefined8 FUN_10084ec70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10084fd80();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_10084bf60(param_1,param_3);
    uVar2 = 1;
    if (-1 < iVar1) {
      uVar2 = FUN_100847e90(param_1,param_1,param_3);
      return uVar2;
    }
  }
  return uVar2;
}

