
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupOutputCallbacks(void)

{
  int local_c;
  
  local_c = DAT_1011b7728;
  if (DAT_1011b772c != 0) {
    while (local_c = local_c + -1, -1 < local_c) {
      *(undefined8 *)(&DAT_1011b7920 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7928 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7930 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7938 + (long)local_c * 0x20) = 0;
    }
    DAT_1011b7728 = 0;
    DAT_1011b772c = 0;
  }
  return;
}

