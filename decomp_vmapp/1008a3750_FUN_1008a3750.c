
undefined8 FUN_1008a3750(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_1008a3d40();
    return uVar1;
  }
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_1008a3b50();
    return uVar1;
  }
  FUN_10087d780(param_1,"Bad time value",0xe);
  return 0;
}

