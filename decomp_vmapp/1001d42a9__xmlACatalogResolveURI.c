
xmlChar * _xmlACatalogResolveURI(xmlCatalogPtr catal,xmlChar *URI)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *cur;
  xmlChar *local_40;
  xmlChar *local_28;
  
  local_28 = (xmlChar *)0x0;
  if ((URI == (xmlChar *)0x0) || (catal == (xmlCatalogPtr)0x0)) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    if (DAT_1011b7f00 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Resolve URI %s\n",URI);
    }
    if (*(int *)catal == 1) {
      local_28 = (xmlChar *)FUN_1001d2a8f(*(undefined8 *)(catal + 0x70),URI);
      if (local_28 == (xmlChar *)0xffffffffffffffff) {
        local_28 = (xmlChar *)0x0;
      }
    }
    else {
      cur = (xmlChar *)FUN_1001d3bd6(catal,0,URI);
      if (cur != (xmlChar *)0x0) {
        _xmlStrdup(cur);
      }
    }
    local_40 = local_28;
  }
  return local_40;
}

