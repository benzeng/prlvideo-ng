
int _xmlCatalogAdd(xmlChar *type,xmlChar *orig,xmlChar *replace)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_1011b7f20 == 0) {
    FUN_1001d4677();
  }
  _xmlRMutexLock(DAT_1011b7f18);
  if ((DAT_1011b7f10 == (xmlCatalogPtr)0x0) &&
     (iVar1 = _xmlStrEqual(type,(xmlChar *)"catalog"), iVar1 != 0)) {
    lVar2 = FUN_1001cf2fc(1,DAT_101111310);
    DAT_1011b7f10 = (xmlCatalogPtr)lVar2;
    uVar3 = FUN_1001cef6b(1,0,orig,0,DAT_101111310,0);
    *(undefined8 *)(lVar2 + 0x70) = uVar3;
    _xmlRMutexUnlock(DAT_1011b7f18);
    return 0;
  }
  iVar1 = _xmlACatalogAdd(DAT_1011b7f10,type,orig,replace);
  _xmlRMutexUnlock(DAT_1011b7f18);
  return iVar1;
}

