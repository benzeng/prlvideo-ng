
ulong FUN_1007dc540(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x10c6f7a0b5ed) {
    uVar1 = (param_1 * 1000000) / DAT_1011a6550;
  }
  else {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","Std",2,"[PrlTicks] Too large delta value: %llu",param_1);
    }
    uVar1 = (param_1 / DAT_1011a6550) * 1000000;
  }
  return uVar1;
}

