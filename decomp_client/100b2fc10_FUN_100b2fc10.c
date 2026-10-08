
undefined8 FUN_100b2fc10(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_100b30730();
    return uVar1;
  }
  return 0x80000014;
}

