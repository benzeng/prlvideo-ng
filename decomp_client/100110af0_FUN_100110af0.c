
undefined8 FUN_100110af0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_2 - 0x806 < 0xb) ||
     ((param_2 >> 8 < 0x11 && ((0x18200U >> (param_2 >> 8 & 0x1f) & 1) != 0)))) {
    uVar1 = param_2 & 0xffffff00;
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0xf00) {
      return 0;
    }
    if (uVar1 != 0x1000) goto LAB_100110b5a;
  }
  uVar1 = (param_2 >> 8) - 7;
  if (9 < uVar1) {
    return 0;
  }
  uVar2 = 0;
  if ((param_2 & 0xffffff00) == 0xf00) {
    return 0;
  }
  if ((0x105U >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    return 0;
  }
LAB_100110b5a:
  return CONCAT71((int7)(uVar2 >> 8),param_2 != 0x915);
}

