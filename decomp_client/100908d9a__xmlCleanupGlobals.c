
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupGlobals(void)

{
  if (DAT_1023134a8 != (xmlMutexPtr)0x0) {
    _xmlFreeMutex(DAT_1023134a8);
    DAT_1023134a8 = (xmlMutexPtr)0x0;
  }
  return;
}

