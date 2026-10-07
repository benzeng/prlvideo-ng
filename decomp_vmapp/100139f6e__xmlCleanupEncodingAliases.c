
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupEncodingAliases(void)

{
  undefined4 local_c;
  
  if (DAT_1011b76d0 != 0) {
    for (local_c = 0; local_c < DAT_1011b76d8; local_c = local_c + 1) {
      if (*(long *)((long)local_c * 0x10 + DAT_1011b76d0) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_1011b76d0));
      }
      if (*(long *)((long)local_c * 0x10 + DAT_1011b76d0 + 8) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_1011b76d0 + 8));
      }
    }
    DAT_1011b76d8 = 0;
    DAT_1011b76dc = 0;
    (*(code *)_xmlFree)(DAT_1011b76d0);
    DAT_1011b76d0 = 0;
  }
  return;
}

