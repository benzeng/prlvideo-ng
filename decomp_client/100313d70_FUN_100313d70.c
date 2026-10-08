
undefined1 FUN_100313d70(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 0x32d5) {
    if (param_2 < -0x7ffeac8d) {
      if (param_2 + 0x7ffffcefU < 2) {
        return 1;
      }
    }
    else if ((param_2 + 0x7ffeac8dU < 0x17) &&
            ((0x420003U >> (param_2 + 0x7ffeac8dU & 0x1f) & 1) != 0)) {
      return 1;
    }
  }
  else if (param_2 < 0x36be) {
    if (param_2 == 0x32d5) {
      return 1;
    }
  }
  else if (param_2 < 0x36dc) {
    if (param_2 == 0x36be) {
      return 1;
    }
  }
  else if (param_2 < 0x3c0f) {
    if (param_2 == 0x36dc) {
      return 1;
    }
    if (param_2 == 0x3ae4) {
      return 1;
    }
  }
  else {
    if (param_2 == 0x3c0f) {
      return 1;
    }
    if (param_2 == 0x3c1a) {
      return 1;
    }
  }
  uVar1 = CMessageDataProvider::isUserInteractiveMessage(param_1);
  return uVar1;
}

