
undefined8 FUN_10038e230(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x2d) {
    if (0x18 < param_1) {
      return 0;
    }
    uVar1 = 0x1002020;
  }
  else {
    param_1 = param_1 - 0x2d;
    if (0x1e < param_1) {
      return 0;
    }
    uVar1 = 0x42080003;
  }
  if ((uVar1 >> (param_1 & 0x1f) & 1) == 0) {
    return 0;
  }
  return 1;
}

