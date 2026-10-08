
xmlChar * _xmlACatalogResolveSystem(xmlCatalogPtr catal,xmlChar *sysID)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *cur;
  xmlChar *local_40;
  xmlChar *local_28;
  
  local_28 = (xmlChar *)0x0;
  if ((sysID == (xmlChar *)0x0) || (catal == (xmlCatalogPtr)0x0)) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    if (DAT_102312c80 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Resolve sysID %s\n",sysID);
    }
    if (*(int *)catal == 1) {
      local_28 = (xmlChar *)FUN_100906090(*(undefined8 *)(catal + 0x70),0,sysID);
      if (local_28 == (xmlChar *)0xffffffffffffffff) {
        local_28 = (xmlChar *)0x0;
      }
    }
    else {
      cur = (xmlChar *)FUN_100907493(*(undefined8 *)(catal + 0x60),sysID);
      if (cur != (xmlChar *)0x0) {
        local_28 = _xmlStrdup(cur);
      }
    }
    local_40 = local_28;
  }
  return local_40;
}

