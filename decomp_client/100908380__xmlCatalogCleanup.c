
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCatalogCleanup(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  if (DAT_102312ca0 != 0) {
    _xmlRMutexLock(DAT_102312c98);
    if (DAT_102312c80 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Catalogs cleanup\n");
    }
    if (DAT_102312c88 != (xmlHashTablePtr)0x0) {
      _xmlHashFree(DAT_102312c88,FUN_100902bb3);
    }
    DAT_102312c88 = (xmlHashTablePtr)0x0;
    if (DAT_102312c90 != (xmlCatalogPtr)0x0) {
      _xmlFreeCatalog(DAT_102312c90);
    }
    DAT_102312c90 = (xmlCatalogPtr)0x0;
    DAT_102312c80 = 0;
    DAT_102312ca0 = 0;
    _xmlRMutexUnlock(DAT_102312c98);
    _xmlFreeRMutex(DAT_102312c98);
  }
  return;
}

