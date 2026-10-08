
undefined8 FUN_100c75e50(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = FUN_100c753b0();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_100c758e0();
    return uVar1;
  }
  return 0;
}

