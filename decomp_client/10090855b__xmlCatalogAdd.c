
int _xmlCatalogAdd(xmlChar *type,xmlChar *orig,xmlChar *replace)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_102312ca0 == 0) {
    FUN_100907f9f();
  }
  _xmlRMutexLock(DAT_102312c98);
  if ((DAT_102312c90 == (xmlCatalogPtr)0x0) &&
     (iVar1 = _xmlStrEqual(type,(xmlChar *)"catalog"), iVar1 != 0)) {
    lVar2 = FUN_100902c24(1,DAT_102279410);
    DAT_102312c90 = (xmlCatalogPtr)lVar2;
    uVar3 = FUN_100902893(1,0,orig,0,DAT_102279410,0);
    *(undefined8 *)(lVar2 + 0x70) = uVar3;
    _xmlRMutexUnlock(DAT_102312c98);
    return 0;
  }
  iVar1 = _xmlACatalogAdd(DAT_102312c90,type,orig,replace);
  _xmlRMutexUnlock(DAT_102312c98);
  return iVar1;
}

