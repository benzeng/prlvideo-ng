
xmlChar * _xmlCatalogGetSystem(xmlChar *sysID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long lVar4;
  xmlChar *local_38;
  
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  if (DAT_102312ca4 == 0) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Use of deprecated xmlCatalogGetSystem() call\n");
    DAT_102312ca4 = DAT_102312ca4 + 1;
  }
  if (sysID == (xmlChar *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    if (((DAT_102312c90 != 0) &&
        (lVar4 = FUN_100906090(*(undefined8 *)(DAT_102312c90 + 0x70),0,sysID), lVar4 != 0)) &&
       (lVar4 != -1)) {
      _snprintf(&DAT_102312cc0,999,"%s",lVar4);
      DAT_1023130a7 = 0;
      return &DAT_102312cc0;
    }
    if (DAT_102312c90 == 0) {
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = (xmlChar *)FUN_100907493(*(undefined8 *)(DAT_102312c90 + 0x60),sysID);
    }
  }
  return local_38;
}

