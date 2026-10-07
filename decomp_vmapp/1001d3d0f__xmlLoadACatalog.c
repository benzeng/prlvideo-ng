
xmlCatalogPtr _xmlLoadACatalog(char *filename)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *local_20;
  xmlCatalogPtr local_18;
  
  pbVar2 = (byte *)FUN_1001d053b(filename);
  local_20 = pbVar2;
  if (pbVar2 == (byte *)0x0) {
    return (xmlCatalogPtr)0x0;
  }
  for (; (((*local_20 != 0 && (*local_20 != 0x2d)) && (*local_20 != 0x3c)) &&
         (((*local_20 < 0x41 || (0x5a < *local_20)) && ((*local_20 < 0x61 || (0x7a < *local_20))))))
      ; local_20 = local_20 + 1) {
  }
  if (*local_20 == 0x3c) {
    local_18 = (xmlCatalogPtr)FUN_1001cf2fc(1,DAT_101111310);
    if (local_18 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
    uVar3 = FUN_1001cef6b(1,0,0,filename,DAT_101111310,0);
    *(undefined8 *)(local_18 + 0x70) = uVar3;
  }
  else {
    local_18 = (xmlCatalogPtr)FUN_1001cf2fc(2,DAT_101111310);
    if (local_18 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
    iVar1 = FUN_1001d332b(local_18,pbVar2,filename,0);
    if (iVar1 < 0) {
      _xmlFreeCatalog(local_18);
      (*(code *)_xmlFree)(pbVar2);
      return (xmlCatalogPtr)0x0;
    }
  }
  (*(code *)_xmlFree)(pbVar2);
  return local_18;
}

