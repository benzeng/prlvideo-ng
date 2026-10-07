
undefined4 FUN_100363470(undefined8 param_1,uint param_2)

{
  if (param_2 < 0x10) {
    return *(undefined4 *)(&DAT_100b3cf20 + (long)(int)param_2 * 4);
  }
  return 0x500;
}

