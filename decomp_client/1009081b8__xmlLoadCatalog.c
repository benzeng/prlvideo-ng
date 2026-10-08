
int _xmlLoadCatalog(char *filename)

{
  xmlCatalogPtr pxVar1;
  undefined4 local_24;
  
  if (DAT_102312ca0 == 0) {
    FUN_100907f9f();
  }
  _xmlRMutexLock(DAT_102312c98);
  if (DAT_102312c90 == (xmlCatalogPtr)0x0) {
    pxVar1 = _xmlLoadACatalog(filename);
    if (pxVar1 == (xmlCatalogPtr)0x0) {
      _xmlRMutexUnlock(DAT_102312c98);
      local_24 = -1;
    }
    else {
      DAT_102312c90 = pxVar1;
      _xmlRMutexUnlock(DAT_102312c98);
      local_24 = 0;
    }
  }
  else {
    local_24 = FUN_1009077d0(DAT_102312c90,filename);
    _xmlRMutexUnlock(DAT_102312c98);
  }
  return local_24;
}

