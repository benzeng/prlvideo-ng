
uint FUN_1008075a0(uint param_1)

{
  ulong uVar1;
  
  if ((int)param_1 < 0x6e) {
    if ((int)param_1 < 0x3c) {
      if (0x33 < param_1) {
        return 0xffffffff;
      }
      uVar1 = 0xffd0040700401 >> ((ulong)param_1 & 0x3f);
    }
    else {
      if (0x28 < param_1 - 0x3c) {
        return 0xffffffff;
      }
      uVar1 = 0x10044100c01 >> ((ulong)(param_1 - 0x3c) & 0x3f);
    }
    if ((uVar1 & 1) != 0) {
      return param_1;
    }
  }
  else if (param_1 - 0x6e < 6) {
    return param_1;
  }
  return 0xffffffff;
}

