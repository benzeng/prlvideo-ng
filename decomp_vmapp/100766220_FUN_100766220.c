
ulong FUN_100766220(ulong param_1,ulong param_2)

{
  if (param_2 >> 0x20 != 0) {
    return ((param_2 & 0xffffffff) * param_1) / ((param_2 >> 0x20) * 1000 & 0xfffffff8);
  }
  return param_1 / param_2;
}

