
int _xmlLoadCatalog(char *filename)

{
  xmlCatalogPtr pxVar1;
  undefined4 local_24;
  
  if (DAT_1011b7f20 == 0) {
    FUN_1001d4677();
  }
  _xmlRMutexLock(DAT_1011b7f18);
  if (DAT_1011b7f10 == (xmlCatalogPtr)0x0) {
    pxVar1 = _xmlLoadACatalog(filename);
    if (pxVar1 == (xmlCatalogPtr)0x0) {
      _xmlRMutexUnlock(DAT_1011b7f18);
      local_24 = -1;
    }
    else {
      DAT_1011b7f10 = pxVar1;
      _xmlRMutexUnlock(DAT_1011b7f18);
      local_24 = 0;
    }
  }
  else {
    local_24 = FUN_1001d3ea8(DAT_1011b7f10,filename);
    _xmlRMutexUnlock(DAT_1011b7f18);
  }
  return local_24;
}

