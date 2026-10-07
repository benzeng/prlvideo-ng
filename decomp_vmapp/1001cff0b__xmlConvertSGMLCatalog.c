
int _xmlConvertSGMLCatalog(xmlCatalogPtr catal)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  int local_24;
  xmlCatalogPtr local_20 [2];
  
  if ((catal == (xmlCatalogPtr)0x0) || (*(int *)catal != 2)) {
    local_24 = -1;
  }
  else {
    local_20[0] = catal;
    if (DAT_1011b7f00 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Converting SGML catalog to XML\n");
    }
    _xmlHashScan(*(xmlHashTablePtr *)(local_20[0] + 0x60),FUN_1001cfd27,local_20);
    local_24 = 0;
  }
  return local_24;
}

