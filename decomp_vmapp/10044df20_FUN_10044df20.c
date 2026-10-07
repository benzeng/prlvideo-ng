
undefined8 FUN_10044df20(int param_1)

{
  if (param_1 < 0x20) {
    if (param_1 < 0xf) {
      if (param_1 == 8) {
        return 0;
      }
    }
    else {
      switch(param_1) {
      case 0xf:
        return 1;
      case 0x10:
        return 2;
      case 0x16:
        return 3;
      case 0x18:
        return 4;
      }
    }
  }
  else if (param_1 == 0x20) {
    return 5;
  }
  return 0xfffffce7;
}

