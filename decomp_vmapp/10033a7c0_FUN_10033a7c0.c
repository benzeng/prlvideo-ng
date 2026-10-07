
uint FUN_10033a7c0(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 0x12) {
    uVar1 = 0;
    if (param_3 - 1 < 3) {
      uVar1 = param_3 - 1;
    }
    return uVar1;
  }
  if (param_2 == 0x11) {
    if (param_3 - 1 < 3) {
      return param_3;
    }
  }
  else if ((param_2 == 0x10) && (param_3 - 1 < 5)) {
    return *(uint *)(&DAT_100b3b520 + (long)(int)(param_3 - 1) * 4);
  }
  return 0;
}

