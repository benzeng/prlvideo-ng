
int _xmlCatalogRemove(xmlChar *value)

{
  int iVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  _xmlRMutexLock(DAT_1011b7f18);
  iVar1 = _xmlACatalogRemove(DAT_1011b7f10,value);
  _xmlRMutexUnlock(DAT_1011b7f18);
  return iVar1;
}

