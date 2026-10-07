
undefined8 FUN_10085cfa0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10084b950(param_1 + 8,param_2 + 8);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_10084b950(param_1 + 0x20,param_2 + 0x20);
    if (lVar1 != 0) {
      lVar1 = FUN_10084b950(param_1 + 0x38,param_2 + 0x38);
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

