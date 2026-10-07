
undefined8 FUN_100734d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar1 = FUN_100735240(param_2,param_3,param_4,*(long *)(param_1 + 0xd0));
    return uVar1;
  }
  return 0;
}

