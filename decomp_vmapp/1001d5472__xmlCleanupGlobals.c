
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupGlobals(void)

{
  if (DAT_1011b8728 != (xmlMutexPtr)0x0) {
    _xmlFreeMutex(DAT_1011b8728);
    DAT_1011b8728 = (xmlMutexPtr)0x0;
  }
  return;
}

