
xmlChar * _xmlCatalogLocalResolveURI(void *catalogs,xmlChar *URI)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *local_40;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  if (URI == (xmlChar *)0x0) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    if (DAT_1011b7f00 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Resolve URI %s\n",URI);
    }
    if (catalogs == (void *)0x0) {
      local_40 = (xmlChar *)0x0;
    }
    else {
      local_40 = (xmlChar *)FUN_1001d2a8f(catalogs,URI);
      if ((local_40 == (xmlChar *)0x0) || (local_40 == (xmlChar *)0xffffffffffffffff)) {
        local_40 = (xmlChar *)0x0;
      }
    }
  }
  return local_40;
}

