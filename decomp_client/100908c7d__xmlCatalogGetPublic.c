
xmlChar * _xmlCatalogGetPublic(xmlChar *pubID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long lVar4;
  xmlChar *local_38;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  if (DAT_1023130a8 == 0) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Use of deprecated xmlCatalogGetPublic() call\n");
    DAT_1023130a8 = DAT_1023130a8 + 1;
  }
  if (pubID == (xmlChar *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    if (((DAT_102312c90 != 0) &&
        (lVar4 = FUN_100906090(*(undefined8 *)(DAT_102312c90 + 0x70),pubID,0), lVar4 != 0)) &&
       (lVar4 != -1)) {
      _snprintf(&DAT_1023130c0,999,"%s",lVar4);
      DAT_1023134a7 = 0;
      return &DAT_1023130c0;
    }
    if (DAT_102312c90 == 0) {
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = (xmlChar *)FUN_1009073a7(*(undefined8 *)(DAT_102312c90 + 0x60),pubID);
    }
  }
  return local_38;
}

