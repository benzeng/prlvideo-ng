
undefined1
FUN_10043c3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,int param_6)

{
  if (param_6 < 0x20) {
    if (param_6 - 0xfU < 2) {
      FUN_10043d610(param_2,param_3,param_4,param_5);
      return 1;
    }
    if (param_6 == 8) {
      FUN_10043db10(param_2,param_3,param_4,param_5);
      return 1;
    }
    if (param_6 == 0x18) {
      FUN_10043d2d0(param_2,param_3,param_4,param_5);
      return 1;
    }
  }
  else if (param_6 == 0x20) {
    FUN_10043cdf0(param_2,param_3,param_4,param_5);
    return 1;
  }
  FUN_1008e3970("","IOEncoders",0,"Can\'t decode for depth %d",param_6);
  return 0;
}

