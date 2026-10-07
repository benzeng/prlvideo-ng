
xmlChar * _xmlCatalogResolve(xmlChar *pubID,xmlChar *sysID)

{
  xmlChar *pxVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolve(DAT_1011b7f10,pubID,sysID);
  return pxVar1;
}

