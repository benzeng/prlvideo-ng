
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlSAXParseDoc(xmlSAXHandlerPtr sax,xmlChar *cur,int recovery)

{
  xmlParserCtxtPtr ctxt;
  xmlDocPtr local_48;
  xmlDocPtr local_20;
  _xmlSAXHandler *local_10;
  
  local_10 = (_xmlSAXHandler *)0x0;
  if (cur == (xmlChar *)0x0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else {
    ctxt = _xmlCreateDocParserCtxt(cur);
    if (ctxt == (xmlParserCtxtPtr)0x0) {
      local_48 = (xmlDocPtr)0x0;
    }
    else {
      if (sax != (xmlSAXHandlerPtr)0x0) {
        local_10 = ctxt->sax;
        ctxt->sax = sax;
        ctxt->userData = (void *)0x0;
      }
      FUN_100144c86(ctxt);
      _xmlParseDocument(ctxt);
      if ((ctxt->wellFormed == 0) && (recovery == 0)) {
        local_20 = (xmlDocPtr)0x0;
        _xmlFreeDoc(ctxt->myDoc);
        ctxt->myDoc = (xmlDocPtr)0x0;
      }
      else {
        local_20 = ctxt->myDoc;
      }
      if (sax != (xmlSAXHandlerPtr)0x0) {
        ctxt->sax = local_10;
      }
      _xmlFreeParserCtxt(ctxt);
      local_48 = local_20;
    }
  }
  return local_48;
}

