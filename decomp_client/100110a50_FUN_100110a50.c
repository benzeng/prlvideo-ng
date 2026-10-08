
uint FUN_100110a50(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 8) - 7;
  if (uVar1 < 10) {
    return 0x105U >> ((byte)uVar1 & 0x1f) & 1;
  }
  return 0;
}

