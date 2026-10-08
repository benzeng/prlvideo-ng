
xmlCatalogPtr _xmlNewCatalog(int sgml)

{
  xmlHashTablePtr pxVar1;
  xmlCatalogPtr local_10;
  
  if (sgml == 0) {
    local_10 = (xmlCatalogPtr)FUN_100902c24(1,DAT_102279410);
  }
  else {
    local_10 = (xmlCatalogPtr)FUN_100902c24(2,DAT_102279410);
    if ((local_10 != (xmlCatalogPtr)0x0) && (*(long *)(local_10 + 0x60) == 0)) {
      pxVar1 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(local_10 + 0x60) = pxVar1;
    }
  }
  return local_10;
}

