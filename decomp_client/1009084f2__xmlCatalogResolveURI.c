
xmlChar * _xmlCatalogResolveURI(xmlChar *URI)

{
  xmlChar *pxVar1;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolveURI(DAT_102312c90,URI);
  return pxVar1;
}

