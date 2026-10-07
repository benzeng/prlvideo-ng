
xmlChar * _xmlCatalogGetSystem(xmlChar *sysID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long lVar4;
  xmlChar *local_38;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  if (DAT_1011b7f24 == 0) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Use of deprecated xmlCatalogGetSystem() call\n");
    DAT_1011b7f24 = DAT_1011b7f24 + 1;
  }
  if (sysID == (xmlChar *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    if (((DAT_1011b7f10 != 0) &&
        (lVar4 = FUN_1001d2768(*(undefined8 *)(DAT_1011b7f10 + 0x70),0,sysID), lVar4 != 0)) &&
       (lVar4 != -1)) {
      _snprintf(&DAT_1011b7f40,999,"%s",lVar4);
      DAT_1011b8327 = 0;
      return &DAT_1011b7f40;
    }
    if (DAT_1011b7f10 == 0) {
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = (xmlChar *)FUN_1001d3b6b(*(undefined8 *)(DAT_1011b7f10 + 0x60),sysID);
    }
  }
  return local_38;
}

