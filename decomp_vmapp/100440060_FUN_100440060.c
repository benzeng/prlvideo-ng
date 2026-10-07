
undefined1
FUN_100440060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6)

{
  if (param_5 < 0x20) {
    if (param_5 - 0xfU < 2) {
      FUN_100441300(param_2,param_6);
      return 1;
    }
    if (param_5 == 8) {
      FUN_100441b40(param_2,param_6);
      return 1;
    }
    if (param_5 == 0x18) {
      FUN_100440980(param_2,param_6);
      return 1;
    }
  }
  else if (param_5 == 0x20) {
    FUN_1004401a0(param_2,param_6);
    return 1;
  }
  FUN_1008e3970("","IOEncoders",0,"Can\'t encode for depth %d");
  return 0;
}

