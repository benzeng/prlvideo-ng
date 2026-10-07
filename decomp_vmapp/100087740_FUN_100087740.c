
undefined1 FUN_100087740(uint param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 4;
    if (param_1 >> 8 != 0xb) {
      uVar1 = 3;
      if (3 < param_1 - 0x801) {
        uVar1 = 1;
      }
      if (param_1 >> 8 != 8) {
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return 0;
}

