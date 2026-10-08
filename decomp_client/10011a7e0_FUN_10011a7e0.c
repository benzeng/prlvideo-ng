
undefined8 FUN_10011a7e0(int param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_1 - 0x806U);
  if (10 < param_1 - 0x806U) {
    if (0x13 < param_1 - 0x901U) {
      return 0;
    }
    uVar1 = 0xc92c1;
    if ((0xc92c1U >> (param_1 - 0x901U & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),param_2 == 0);
}

