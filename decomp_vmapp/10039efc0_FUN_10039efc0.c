
undefined8 FUN_10039efc0(ushort param_1)

{
  if (param_1 < 0xfffd) {
    if (param_1 < 0x60) {
      if ((param_1 < 0x2e) && ((0x3fc07e000001U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
        return 0;
      }
    }
    else if (param_1 == 0x60) {
      return 0;
    }
  }
  else if (param_1 == 0xfffd) {
    return 0;
  }
  return 1;
}

