
ulong FUN_100110aa0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = param_2 - 0x806;
  if ((uVar1 < 0xb) ||
     ((uVar1 = param_2 >> 8, uVar1 < 0x11 && ((0x18200U >> (uVar1 & 0x1f) & 1) != 0)))) {
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if ((param_2 & 0xffffff00) == 0x1000) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (ulong)CONCAT21((short)(param_2 >> 0x10),(param_2 & 0xffffff00) == 0x900);
  }
  return uVar2;
}

