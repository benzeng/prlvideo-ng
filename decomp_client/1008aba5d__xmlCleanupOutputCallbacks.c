
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupOutputCallbacks(void)

{
  int local_c;
  
  local_c = DAT_1023124a8;
  if (DAT_1023124ac != 0) {
    while (local_c = local_c + -1, -1 < local_c) {
      *(undefined8 *)(&DAT_1023126a0 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023126a8 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023126b0 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1023126b8 + (long)local_c * 0x20) = 0;
    }
    DAT_1023124a8 = 0;
    DAT_1023124ac = 0;
  }
  return;
}

