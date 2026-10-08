
undefined8 FUN_100c5a510(uint param_1)

{
  if ((int)param_1 < 0x39) {
    if ((param_1 < 0x26) && ((0x3800000010U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x39) {
      return 1;
    }
    if (param_1 == 100) {
      return 1;
    }
  }
  return 0;
}

