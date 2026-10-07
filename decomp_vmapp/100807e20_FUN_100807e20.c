
undefined8 FUN_100807e20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10080d4e0();
  FUN_10080ef10(param_1,0x20,0x2000,0);
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x280) = 1;
  uVar1 = FUN_10080eb10(param_1);
  if (0 < (int)uVar1) {
    uVar1 = FUN_10080e280(param_1);
    FUN_10087db60(uVar1,0x2e,0,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

