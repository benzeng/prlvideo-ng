
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRelaxNGCleanupTypes(void)

{
  _xmlSchemaCleanupTypes();
  if (DAT_1011b8918 != 0) {
    _xmlHashFree(DAT_1011b8920,FUN_10023140b);
    DAT_1011b8918 = 0;
  }
  return;
}

