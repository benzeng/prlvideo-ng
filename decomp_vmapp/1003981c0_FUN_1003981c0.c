
long FUN_1003981c0(int param_1,byte param_2,ulong param_3)

{
  if (param_1 < 0x8c18) {
    if (0x806e < param_1) {
      if (param_1 == 0x806f) {
        return 2;
      }
      if (param_1 != 0x8513) {
        return 0;
      }
      return 3;
    }
    if (param_1 == 0xde0) {
      return 5;
    }
    if (param_1 != 0xde1) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x9100) {
      if (param_1 < 0x8c2a) {
        if ((param_1 == 0x8c18) || (param_1 == 0x8c1a)) {
          return 6;
        }
      }
      else {
        if (param_1 == 0x8c2a) {
          return 6;
        }
        if (param_1 == 0x9009) {
          return 6;
        }
      }
      return 0;
    }
    if (param_1 == 0x9102) {
      return 6;
    }
    if (param_1 != 0x9100) {
      return 0;
    }
  }
  if (((uint)param_3 < 0x2d) && ((0x180800000000U >> (param_3 & 0x3f) & 1) != 0)) {
    return 1;
  }
  return (ulong)param_2 * 3 + 1;
}

