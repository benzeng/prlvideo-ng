
undefined8 FUN_10038e2b0(int param_1)

{
  if (param_1 < 0x33) {
    if (param_1 - 0xbU < 4) {
      return 1;
    }
  }
  else if ((param_1 - 0x33U < 0x3c) &&
          ((0xc000000001f0007U >> ((ulong)(param_1 - 0x33U) & 0x3f) & 1) != 0)) {
    return 1;
  }
  return 0;
}

