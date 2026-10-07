
undefined8 FUN_10047e940(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0xc) - *(int *)(*(long *)(param_1 + 0x30) + 8) < 200) {
      FUN_100069370(param_1 + 0x30);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

