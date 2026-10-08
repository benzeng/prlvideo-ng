
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupEncodingAliases(void)

{
  undefined4 local_c;
  
  if (DAT_102312450 != 0) {
    for (local_c = 0; local_c < DAT_102312458; local_c = local_c + 1) {
      if (*(long *)((long)local_c * 0x10 + DAT_102312450) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_102312450));
      }
      if (*(long *)((long)local_c * 0x10 + DAT_102312450 + 8) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_102312450 + 8));
      }
    }
    DAT_102312458 = 0;
    DAT_10231245c = 0;
    (*(code *)_xmlFree)(DAT_102312450);
    DAT_102312450 = 0;
  }
  return;
}

