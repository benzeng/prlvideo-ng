
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlDictCleanup(void)

{
  if (DAT_1011b8930 != 0) {
    _xmlFreeRMutex(DAT_1011b8928);
    DAT_1011b8930 = 0;
  }
  return;
}

