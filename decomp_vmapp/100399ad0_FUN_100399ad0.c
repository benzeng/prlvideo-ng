
undefined4 FUN_100399ad0(undefined8 param_1,uint param_2)

{
  if (((param_2 & 0x100) != 0) && ((param_2 & 0xfffffeff) < 5)) {
    return *(undefined4 *)(&DAT_100b3f2a0 + (long)(int)(param_2 & 0xfffffeff) * 4);
  }
  return 0;
}

