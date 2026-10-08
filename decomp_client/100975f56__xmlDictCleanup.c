
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlDictCleanup(void)

{
  if (DAT_1023136b0 != 0) {
    _xmlFreeRMutex(DAT_1023136a8);
    DAT_1023136b0 = 0;
  }
  return;
}

