
undefined8 FUN_100244e90(int param_1)

{
  if (param_1 < 0x3ae6) {
    if (param_1 == -0x7ffeaf87) {
      return 1;
    }
    if (param_1 == -0x7ffeaf78) {
      return 1;
    }
  }
  else if ((param_1 - 0x3ae6U < 10) && ((0x3ddU >> (param_1 - 0x3ae6U & 0x1f) & 1) != 0)) {
    return 1;
  }
  return 0;
}

