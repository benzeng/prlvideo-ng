
undefined4 FUN_100026490(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_100b2d2c0 + (long)(int)param_1 * 4);
  }
  return 0x80000009;
}

