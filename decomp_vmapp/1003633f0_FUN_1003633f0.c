
undefined4 FUN_1003633f0(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 5) {
    return *(undefined4 *)(&DAT_100b3cf00 + (long)(int)(param_2 - 1U) * 4);
  }
  return 0x500;
}

