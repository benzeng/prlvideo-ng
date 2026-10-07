
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupInputCallbacks(void)

{
  int local_c;
  
  local_c = DAT_1011b7720;
  if (DAT_1011b7724 != 0) {
    while (local_c = local_c + -1, -1 < local_c) {
      *(undefined8 *)(&DAT_1011b7740 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7748 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7750 + (long)local_c * 0x20) = 0;
      *(undefined8 *)(&DAT_1011b7758 + (long)local_c * 0x20) = 0;
    }
    DAT_1011b7720 = 0;
    DAT_1011b7724 = 0;
  }
  return;
}

