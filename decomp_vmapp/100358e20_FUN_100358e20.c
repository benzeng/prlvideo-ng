
bool FUN_100358e20(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  if ((param_1 != 1) && ((param_5 & 0xf) == param_6)) {
    return true;
  }
  if (param_1 < 0x16) {
    if (param_1 < 0x11) {
      if (param_1 < 0xf) {
        if (param_1 < 3) {
          if (param_1 == 1) {
            return false;
          }
          if (param_1 == 2) goto LAB_100358e98;
        }
        else {
          if (param_1 == 3) goto LAB_100358ea8;
          if (param_1 == 0xd) goto LAB_100358e8b;
        }
      }
      else if (param_1 == 0xf) {
LAB_100358e8b:
        if (param_6 == 2) {
          return true;
        }
      }
    }
    else if (param_1 == 0x11) {
LAB_100358e98:
      return (param_3 & 0xf) == param_6;
    }
  }
  else {
    if (param_1 - 0x16U < 2) {
      return param_6 == 2;
    }
    if ((param_1 - 0x19U < 2) && ((param_2 & 0xf) == param_6)) {
      return true;
    }
  }
  if ((param_3 & 0xf) == param_6) {
    return true;
  }
LAB_100358ea8:
  return (param_4 & 0xf) == param_6;
}

