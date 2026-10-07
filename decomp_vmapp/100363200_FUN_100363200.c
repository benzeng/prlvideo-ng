
undefined4 FUN_100363200(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 8) {
    return *(undefined4 *)(&DAT_100b3cee0 + (long)(int)(param_2 - 1U) * 4);
  }
  return 0x500;
}

