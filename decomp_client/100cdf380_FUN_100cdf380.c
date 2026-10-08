
char * FUN_100cdf380(uint param_1)

{
  char *pcVar1;
  
  if (param_1 < 0xb2) {
    pcVar1 = "INVALID_KEYCODE";
    if (*(char **)(&DAT_10225ac50 + (ulong)param_1 * 8) != (char *)0x0) {
      pcVar1 = *(char **)(&DAT_10225ac50 + (ulong)param_1 * 8);
    }
    return pcVar1;
  }
  return "INVALID_KEYCODE";
}

