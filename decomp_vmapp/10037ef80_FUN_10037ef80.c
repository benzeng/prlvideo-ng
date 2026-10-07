
undefined4 FUN_10037ef80(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 8) {
    return *(undefined4 *)(&DAT_100b3e160 + (long)(int)(param_2 - 1U) * 4);
  }
  return 0x1e00;
}

