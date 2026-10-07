
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlCatalogConvert(void)

{
  int iVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  _xmlRMutexLock(DAT_1011b7f18);
  iVar1 = _xmlConvertSGMLCatalog(DAT_1011b7f10);
  _xmlRMutexUnlock(DAT_1011b7f18);
  return iVar1;
}

