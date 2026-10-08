
ulong FUN_100dddb20(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x10c6f7a0b5ed) {
    uVar1 = (param_1 * 1000000) / DAT_10230feb0;
  }
  else {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","Std",2,"[PrlTicks] Too large delta value: %llu",param_1);
    }
    uVar1 = (param_1 / DAT_10230feb0) * 1000000;
  }
  return uVar1;
}

