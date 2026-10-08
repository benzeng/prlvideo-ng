
int _xmlCatalogRemove(xmlChar *value)

{
  int iVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  _xmlRMutexLock(DAT_102312c98);
  iVar1 = _xmlACatalogRemove(DAT_102312c90,value);
  _xmlRMutexUnlock(DAT_102312c98);
  return iVar1;
}

