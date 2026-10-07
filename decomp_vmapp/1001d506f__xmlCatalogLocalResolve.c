
xmlChar * _xmlCatalogLocalResolve(void *catalogs,xmlChar *pubID,xmlChar *sysID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *local_48;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  if ((pubID == (xmlChar *)0x0) && (sysID == (xmlChar *)0x0)) {
    local_48 = (xmlChar *)0x0;
  }
  else {
    if (DAT_1011b7f00 != 0) {
      if ((pubID == (xmlChar *)0x0) || (sysID == (xmlChar *)0x0)) {
        if (pubID == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"Local Resolve: sysID %s\n",sysID);
        }
        else {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"Local Resolve: pubID %s\n",pubID);
        }
      }
      else {
        ppxVar2 = ___xmlGenericError();
        pxVar1 = *ppxVar2;
        ppvVar3 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar3,"Local Resolve: pubID %s sysID %s\n",pubID,sysID);
      }
    }
    if (catalogs == (void *)0x0) {
      local_48 = (xmlChar *)0x0;
    }
    else {
      local_48 = (xmlChar *)FUN_1001d2768(catalogs,pubID,sysID);
      if ((local_48 == (xmlChar *)0x0) || (local_48 == (xmlChar *)0xffffffffffffffff)) {
        local_48 = (xmlChar *)0x0;
      }
    }
  }
  return local_48;
}

