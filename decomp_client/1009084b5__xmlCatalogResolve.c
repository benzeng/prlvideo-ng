
xmlChar * _xmlCatalogResolve(xmlChar *pubID,xmlChar *sysID)

{
  xmlChar *pxVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolve(DAT_102312c90,pubID,sysID);
  return pxVar1;
}

