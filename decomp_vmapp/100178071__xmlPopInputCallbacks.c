
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlPopInputCallbacks(void)

{
  int local_c;
  
  if (DAT_1011b7724 == 0) {
    local_c = -1;
  }
  else if (DAT_1011b7720 < 1) {
    local_c = -1;
  }
  else {
    DAT_1011b7720 = DAT_1011b7720 + -1;
    *(undefined8 *)(&DAT_1011b7740 + (long)DAT_1011b7720 * 0x20) = 0;
    *(undefined8 *)(&DAT_1011b7748 + (long)DAT_1011b7720 * 0x20) = 0;
    *(undefined8 *)(&DAT_1011b7750 + (long)DAT_1011b7720 * 0x20) = 0;
    *(undefined8 *)(&DAT_1011b7758 + (long)DAT_1011b7720 * 0x20) = 0;
    local_c = DAT_1011b7720;
  }
  return local_c;
}

