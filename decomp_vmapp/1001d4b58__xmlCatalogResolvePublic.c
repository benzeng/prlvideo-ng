
xmlChar * _xmlCatalogResolvePublic(xmlChar *pubID)

{
  xmlChar *pxVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolvePublic(DAT_1011b7f10,pubID);
  return pxVar1;
}

