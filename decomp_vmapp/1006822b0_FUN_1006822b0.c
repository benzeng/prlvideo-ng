
undefined8 FUN_1006822b0(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 & 0xfffffffe) != 0xee) {
    if ((int)param_1 < 0x82) {
      if ((param_1 < 0x10) && ((0x98c0U >> (param_1 & 0x1f) & 1) != 0)) {
        return 1;
      }
    }
    else {
      if (param_1 - 0x82 < 2) {
        return 1;
      }
      if (param_1 == 0xa5) {
        return 1;
      }
      if (param_1 == 0xd8) {
        return 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

