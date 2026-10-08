
undefined8 FUN_100c7ecd0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_100c7f2c0();
    return uVar1;
  }
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_100c7f0d0();
    return uVar1;
  }
  FUN_100c58980(param_1,"Bad time value",0xe);
  return 0;
}

