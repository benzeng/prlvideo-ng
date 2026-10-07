
void _xmlCatalogSetDefaults(xmlCatalogAllow allow)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  if (DAT_1011b7f00 != 0) {
    if (allow == XML_CATA_ALLOW_GLOBAL) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Allowing only global catalogs\n");
    }
    else if (allow == XML_CATA_ALLOW_NONE) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Disabling catalog usage\n");
    }
    else if (allow == XML_CATA_ALLOW_DOCUMENT) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Allowing only catalogs from the document\n");
    }
    else if (allow == XML_CATA_ALLOW_ALL) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Allowing all catalogs\n");
    }
  }
  DAT_10111130c = allow;
  return;
}

