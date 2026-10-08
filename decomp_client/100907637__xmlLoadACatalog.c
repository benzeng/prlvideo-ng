
xmlCatalogPtr _xmlLoadACatalog(char *filename)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *local_20;
  xmlCatalogPtr local_18;
  
  pbVar2 = (byte *)FUN_100903e63(filename);
  local_20 = pbVar2;
  if (pbVar2 == (byte *)0x0) {
    return (xmlCatalogPtr)0x0;
  }
  for (; (((*local_20 != 0 && (*local_20 != 0x2d)) && (*local_20 != 0x3c)) &&
         (((*local_20 < 0x41 || (0x5a < *local_20)) && ((*local_20 < 0x61 || (0x7a < *local_20))))))
      ; local_20 = local_20 + 1) {
  }
  if (*local_20 == 0x3c) {
    local_18 = (xmlCatalogPtr)FUN_100902c24(1,DAT_102279410);
    if (local_18 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
    uVar3 = FUN_100902893(1,0,0,filename,DAT_102279410,0);
    *(undefined8 *)(local_18 + 0x70) = uVar3;
  }
  else {
    local_18 = (xmlCatalogPtr)FUN_100902c24(2,DAT_102279410);
    if (local_18 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
    iVar1 = FUN_100906c53(local_18,pbVar2,filename,0);
    if (iVar1 < 0) {
      _xmlFreeCatalog(local_18);
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
  }
  (*(code *)_xmlFree)(pbVar2);
  return local_18;
}

