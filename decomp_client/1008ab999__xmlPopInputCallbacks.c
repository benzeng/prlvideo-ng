
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlPopInputCallbacks(void)

{
  int local_c;
  
  if (DAT_1023124a4 == 0) {
    local_c = -1;
  }
  else if (DAT_1023124a0 < 1) {
    local_c = -1;
  }
  else {
    DAT_1023124a0 = DAT_1023124a0 + -1;
    *(undefined8 *)(&DAT_1023124c0 + (long)DAT_1023124a0 * 0x20) = 0;
    *(undefined8 *)(&DAT_1023124c8 + (long)DAT_1023124a0 * 0x20) = 0;
    *(undefined8 *)(&DAT_1023124d0 + (long)DAT_1023124a0 * 0x20) = 0;
    *(undefined8 *)(&DAT_1023124d8 + (long)DAT_1023124a0 * 0x20) = 0;
    local_c = DAT_1023124a0;
  }
  return local_c;
}

