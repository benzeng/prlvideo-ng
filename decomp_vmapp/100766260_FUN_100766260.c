
ulong FUN_100766260(long param_1,ulong param_2)

{
  if (param_2 >> 0x20 == 0) {
    param_2 = param_2 * param_1;
  }
  else {
    param_2 = (param_1 * (param_2 >> 0x20) * 1000) / (param_2 & 0xffffffff);
  }
  return param_2;
}

