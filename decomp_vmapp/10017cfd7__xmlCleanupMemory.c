
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupMemory(void)

{
  if (DAT_1011b7b00 != 0) {
    _xmlFreeMutex(DAT_1011b7b20);
    DAT_1011b7b20 = (xmlMutexPtr)0x0;
    DAT_1011b7b00 = 0;
  }
  return;
}

