
xmlChar * _xmlACatalogResolve(xmlCatalogPtr catal,xmlChar *pubID,xmlChar *sysID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *cur;
  xmlChar *local_48;
  xmlChar *local_28;
  
  local_28 = (xmlChar *)0x0;
  if (((pubID == (xmlChar *)0x0) && (sysID == (xmlChar *)0x0)) || (catal == (xmlCatalogPtr)0x0)) {
    local_48 = (xmlChar *)0x0;
  }
  else {
    if (DAT_1011b7f00 != 0) {
      if ((pubID == (xmlChar *)0x0) || (sysID == (xmlChar *)0x0)) {
        if (pubID == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"Resolve: sysID %s\n",sysID);
        }
        else {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"Resolve: pubID %s\n",pubID);
        }
      }
      else {
        ppxVar2 = ___xmlGenericError();
        pxVar1 = *ppxVar2;
        ppvVar3 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar3,"Resolve: pubID %s sysID %s\n",pubID,sysID);
      }
    }
    if (*(int *)catal == 1) {
      local_28 = (xmlChar *)FUN_1001d2768(*(undefined8 *)(catal + 0x70),pubID,sysID);
      if (local_28 == (xmlChar *)0xffffffffffffffff) {
        local_28 = (xmlChar *)0x0;
      }
    }
    else {
      cur = (xmlChar *)FUN_1001d3bd6(catal,pubID,sysID);
      if (cur != (xmlChar *)0x0) {
        local_28 = _xmlStrdup(cur);
      }
    }
    local_48 = local_28;
  }
  return local_48;
}

