
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr FUN_1001c3f5b(long *param_1,char *param_2)

{
  xmlParserCtxtPtr ctxt;
  xmlParserInputPtr pxVar1;
  xmlChar *pxVar2;
  xmlDocPtr local_40;
  xmlDocPtr local_28;
  xmlChar *local_18;
  
  local_18 = (xmlChar *)0x0;
  _xmlInitParser();
  ctxt = _xmlNewParserCtxt();
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    FUN_1001c3600(param_1,0,"cannot allocate parser context");
    local_40 = (xmlDocPtr)0x0;
  }
  else {
    if (((*param_1 != 0) && (*(long *)(*param_1 + 0x98) != 0)) && (ctxt->dict != (xmlDictPtr)0x0)) {
      _xmlDictFree(ctxt->dict);
      ctxt->dict = *(xmlDictPtr *)(*param_1 + 0x98);
      _xmlDictReference(ctxt->dict);
    }
    _xmlCtxtUseOptions(ctxt,*(uint *)(param_1 + 0xb) | 4);
    pxVar1 = _xmlLoadExternalEntity(param_2,(char *)0x0,ctxt);
    if (pxVar1 == (xmlParserInputPtr)0x0) {
      _xmlFreeParserCtxt(ctxt);
      local_40 = (xmlDocPtr)0x0;
    }
    else {
      _inputPush(ctxt,pxVar1);
      if (ctxt->directory == (char *)0x0) {
        local_18 = (xmlChar *)_xmlParserGetDirectory(param_2);
      }
      if ((ctxt->directory == (char *)0x0) && (local_18 != (xmlChar *)0x0)) {
        pxVar2 = _xmlStrdup(local_18);
        ctxt->directory = (char *)pxVar2;
      }
      ctxt->loadsubset = ctxt->loadsubset | 2;
      _xmlParseDocument(ctxt);
      if (ctxt->wellFormed == 0) {
        local_28 = (xmlDocPtr)0x0;
        if (ctxt->myDoc != (xmlDocPtr)0x0) {
          _xmlFreeDoc(ctxt->myDoc);
        }
        ctxt->myDoc = (xmlDocPtr)0x0;
      }
      else {
        local_28 = ctxt->myDoc;
      }
      _xmlFreeParserCtxt(ctxt);
      local_40 = local_28;
    }
  }
  return local_40;
}

