
xmlCatalogPtr _xmlNewCatalog(int sgml)

{
  xmlHashTablePtr pxVar1;
  xmlCatalogPtr local_10;
  
  if (sgml == 0) {
    local_10 = (xmlCatalogPtr)FUN_1001cf2fc(1,DAT_101111310);
  }
  else {
    local_10 = (xmlCatalogPtr)FUN_1001cf2fc(2,DAT_101111310);
    if ((local_10 != (xmlCatalogPtr)0x0) && (*(long *)(local_10 + 0x60) == 0)) {
      pxVar1 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(local_10 + 0x60) = pxVar1;
    }
  }
  return local_10;
}

