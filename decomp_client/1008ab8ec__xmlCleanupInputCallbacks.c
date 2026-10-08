
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupInputCallbacks(void)

{
  int local_c;
  
  local_c = DAT_1023124a0;
  if (DAT_1023124a4 != 0) {
    while (local_c = local_c + -1, -1 < local_c) {
      *(undefined8 *)(&DAT_1023124c0 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023124c8 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023124d0 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023124d8 + (long)local_c * 0x20) = 0;
    }
    DAT_1023124a0 = 0;
    DAT_1023124a4 = 0;
  }
  return;
}

