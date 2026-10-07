
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupParser(void)

{
  if (DAT_1011b7708 != 0) {
    _xmlCleanupCharEncodingHandlers();
    _xmlCatalogCleanup();
    _xmlDictCleanup();
    _xmlCleanupInputCallbacks();
    _xmlCleanupOutputCallbacks();
    _xmlSchemaCleanupTypes();
    _xmlRelaxNGCleanupTypes();
    _xmlCleanupGlobals();
    _xmlResetLastError();
    _xmlCleanupThreads();
    _xmlCleanupMemory();
    DAT_1011b7708 = 0;
  }
  return;
}

