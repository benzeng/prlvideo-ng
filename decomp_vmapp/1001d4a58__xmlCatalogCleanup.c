
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCatalogCleanup(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  if (DAT_1011b7f20 != 0) {
    _xmlRMutexLock(DAT_1011b7f18);
    if (DAT_1011b7f00 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Catalogs cleanup\n");
    }
    if (DAT_1011b7f08 != (xmlHashTablePtr)0x0) {
      _xmlHashFree(DAT_1011b7f08,FUN_1001cf28b);
    }
    DAT_1011b7f08 = (xmlHashTablePtr)0x0;
    if (DAT_1011b7f10 != (xmlCatalogPtr)0x0) {
      _xmlFreeCatalog(DAT_1011b7f10);
    }
    DAT_1011b7f10 = (xmlCatalogPtr)0x0;
    DAT_1011b7f00 = 0;
    DAT_1011b7f20 = 0;
    _xmlRMutexUnlock(DAT_1011b7f18);
    _xmlFreeRMutex(DAT_1011b7f18);
  }
  return;
}

