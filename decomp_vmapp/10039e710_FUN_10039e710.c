
undefined8 FUN_10039e710(uint param_1)

{
  if ((int)param_1 < 0x55) {
    if (0x15 < param_1) {
      return 0x2600;
    }
    if ((0x300030U >> (param_1 & 0x1f) & 1) == 0) {
      return 0x2600;
    }
  }
  else if ((int)param_1 < 0xd5) {
    if (((1 < param_1 - 0x84) && (1 < param_1 - 0x94)) && (param_1 != 0x55)) {
      return 0x2600;
    }
  }
  else if (param_1 != 0xd5) {
    return 0x2600;
  }
  return 0x2601;
}

