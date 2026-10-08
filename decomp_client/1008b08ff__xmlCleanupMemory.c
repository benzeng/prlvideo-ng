
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupMemory(void)

{
  if (DAT_102312880 != 0) {
    _xmlFreeMutex(DAT_1023128a0);
    DAT_1023128a0 = (xmlMutexPtr)0x0;
    DAT_102312880 = 0;
  }
  return;
}

