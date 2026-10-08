
undefined4 FUN_10091c984(undefined4 *param_1)

{
  switch(*param_1) {
  case 4:
  case 5:
    if (((uint)param_1[0x16] >> 3 & 1) != 0) {
      return 1;
    }
    break;
  default:
    return 1;
  case 0xe:
    if (((uint)param_1[0x16] >> 1 & 1) != 0) {
      return 1;
    }
    break;
  case 0xf:
    if ((param_1[0x1e] & 1) != 0) {
      return 1;
    }
    break;
  case 0x11:
    return 1;
  }
  return 0;
}

