
undefined8 FUN_1009d6900(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 0x1000007) {
    uVar1 = FUN_1009d6ad0();
  }
  else if (*(int *)(param_1 + 0x38) == 7) {
    uVar1 = FUN_1009d6930();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

