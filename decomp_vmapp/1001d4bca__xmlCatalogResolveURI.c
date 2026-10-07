
xmlChar * _xmlCatalogResolveURI(xmlChar *URI)

{
  xmlChar *pxVar1;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  pxVar1 = _xmlACatalogResolveURI(DAT_1011b7f10,URI);
  return pxVar1;
}

