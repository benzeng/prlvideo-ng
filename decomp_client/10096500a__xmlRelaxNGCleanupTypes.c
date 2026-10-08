
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRelaxNGCleanupTypes(void)

{
  _xmlSchemaCleanupTypes();
  if (DAT_102313698 != 0) {
    _xmlHashFree(DAT_1023136a0,FUN_100964d33);
    DAT_102313698 = 0;
  }
  return;
}

