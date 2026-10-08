
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlCatalogConvert(void)

{
  int iVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  _xmlRMutexLock(DAT_102312c98);
  iVar1 = _xmlConvertSGMLCatalog(DAT_102312c90);
  _xmlRMutexUnlock(DAT_102312c98);
  return iVar1;
}

