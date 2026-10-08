
xmlCatalogPtr _xmlLoadSGMLSuperCatalog(char *filename)

{
  int iVar1;
  long lVar2;
  xmlCatalogPtr local_38;
  
  lVar2 = FUN_100903e63(filename);
  if (lVar2 == 0) {
    local_38 = (xmlCatalogPtr)0x0;
  }
  else {
    local_38 = (xmlCatalogPtr)FUN_100902c24(2,DAT_102279410);
    if (local_38 == (xmlCatalogPtr)0x0) {
      (*(code *)_xmlFree)(lVar2);
      local_38 = (xmlCatalogPtr)0x0;
    }
    else {
      iVar1 = FUN_100906c53(local_38,lVar2,filename,1);
      (*(code *)_xmlFree)(lVar2);
      if (iVar1 < 0) {
        _xmlFreeCatalog(local_38);
        local_38 = (xmlCatalogPtr)0x0;
      }
    }
  }
  return local_38;
}

