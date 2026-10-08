
bool FUN_100cd0070(int param_1,int param_2,int param_3)

{
  if (param_1 != 7) {
    if (param_1 == 9) {
      if (param_2 == 0x904) {
        return false;
      }
      if (param_2 == 0x9ff) {
        return false;
      }
    }
    else if ((7 < param_2 - 0x809U) && (5 < param_2 - 0xa04U)) {
      return false;
    }
  }
  return param_3 != 0;
}

