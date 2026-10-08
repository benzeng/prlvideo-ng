
bool FUN_100110ba0(int param_1,uint param_2)

{
  bool bVar1;
  
  if ((param_1 == 8) && (param_2 == 0x806)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (param_1 != 9) {
      if (10 < param_2 - 0x806) {
        if (0x10 < param_2 >> 8) {
          return false;
        }
        if ((0x18200U >> (param_2 >> 8 & 0x1f) & 1) == 0) {
          return false;
        }
      }
      bVar1 = (param_2 & 0xffffff00) != 0x1000;
    }
  }
  return bVar1;
}

