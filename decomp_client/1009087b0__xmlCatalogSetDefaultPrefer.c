
xmlCatalogPrefer _xmlCatalogSetDefaultPrefer(xmlCatalogPrefer prefer)

{
  xmlGenericErrorFunc pxVar1;
  xmlCatalogPrefer xVar2;
  xmlCatalogPrefer xVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  
  xVar2 = DAT_102279410;
  xVar3 = DAT_102279410;
  if ((prefer != XML_CATA_PREFER_NONE) && (xVar3 = prefer, DAT_102312c80 != 0)) {
    if (prefer == XML_CATA_PREFER_PUBLIC) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Setting catalog preference to PUBLIC\n");
      xVar3 = prefer;
    }
    else {
      xVar3 = prefer;
      if (prefer == XML_CATA_PREFER_SYSTEM) {
        ppxVar4 = ___xmlGenericError();
        pxVar1 = *ppxVar4;
        ppvVar5 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar5,"Setting catalog preference to SYSTEM\n");
        xVar3 = prefer;
      }
    }
  }
  DAT_102279410 = xVar3;
  return xVar2;
}

