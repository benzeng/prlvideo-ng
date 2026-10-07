
xmlCatalogPtr _xmlLoadSGMLSuperCatalog(char *filename)

{
  int iVar1;
  long lVar2;
  xmlCatalogPtr local_38;
  
  lVar2 = FUN_1001d053b(filename);
  if (lVar2 == 0) {
    local_38 = (xmlCatalogPtr)0x0;
  }
  else {
    local_38 = (xmlCatalogPtr)FUN_1001cf2fc(2,DAT_101111310);
    if (local_38 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(lVar2);
      local_38 = (xmlCatalogPtr)0x0;
    }
    else {
      iVar1 = FUN_1001d332b(local_38,lVar2,filename,1);
      (*(code *)_xmlFree)(lVar2);
      if (iVar1 < 0) {
        _xmlFreeCatalog(local_38);
        local_38 = (xmlCatalogPtr)0x0;
      }
    }
  }
  return local_38;
}

