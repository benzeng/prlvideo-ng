
xmlChar * _xmlCatalogResolveSystem(xmlChar *sysID)

{
  xmlChar *pxVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolveSystem(DAT_102312c90,sysID);
  return pxVar1;
}

