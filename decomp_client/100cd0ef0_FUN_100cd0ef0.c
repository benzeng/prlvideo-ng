
char * FUN_100cd0ef0(int param_1)

{
  if (param_1 < 0x10) {
    switch(param_1) {
    case 0:
      return "PMB_NOBUTTON";
    case 1:
      return "PMB_LEFT_BUTTON";
    case 2:
      return "PMB_RIGHT_BUTTON";
    case 4:
      return "PMB_MIDDLE_BUTTON";
    case 8:
      return "PMB_XBUTTON1";
    }
  }
  else if (param_1 < 0x40) {
    if (param_1 == 0x10) {
      return "PMB_XBUTTON2";
    }
    if (param_1 == 0x20) {
      return "PMB_XBUTTON3";
    }
  }
  else {
    if (param_1 == 0x40) {
      return "PMB_XBUTTON4";
    }
    if (param_1 == 0x80) {
      return "PMB_XBUTTON5";
    }
  }
  return "???";
}

