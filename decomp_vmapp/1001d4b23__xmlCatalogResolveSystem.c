
xmlChar * _xmlCatalogResolveSystem(xmlChar *sysID)

{
  xmlChar *pxVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolveSystem(DAT_1011b7f10,sysID);
  return pxVar1;
}

