
undefined8 FUN_100110a10(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2 - 0x806);
  if (10 < param_2 - 0x806) {
    uVar1 = 0;
    if (0x10 < param_2 >> 8) {
      return 0;
    }
    if ((0x18200U >> (param_2 >> 8 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),(param_2 & 0xffffff00) != 0x1000);
}

