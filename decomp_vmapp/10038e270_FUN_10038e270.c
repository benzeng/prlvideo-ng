
undefined8 FUN_10038e270(int param_1)

{
  if (param_1 < 0x20) {
    if (param_1 - 0x16U < 4) {
      return 1;
    }
  }
  else if (param_1 < 0x6b) {
    if ((param_1 - 0x20U < 0x22) && ((0x3d0070201U >> ((ulong)(param_1 - 0x20U) & 0x3f) & 1) != 0))
    {
      return 1;
    }
  }
  else if (param_1 - 0x6bU < 2) {
    return 1;
  }
  return 0;
}

