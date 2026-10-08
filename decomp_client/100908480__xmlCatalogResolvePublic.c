
xmlChar * _xmlCatalogResolvePublic(xmlChar *pubID)

{
  xmlChar *pxVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolvePublic(DAT_102312c90,pubID);
  return pxVar1;
}

