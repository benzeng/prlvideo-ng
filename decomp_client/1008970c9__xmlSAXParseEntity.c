
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlSAXParseEntity(xmlSAXHandlerPtr sax,char *filename)

{
  xmlParserCtxtPtr ctxt;
  xmlDocPtr local_30;
  xmlDocPtr local_18;
  
  ctxt = (xmlParserCtxtPtr)_xmlCreateFileParserCtxt(filename);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_30 = (xmlDocPtr)0x0;
  }
  else {
    if (sax != (xmlSAXHandlerPtr)0x0) {
      if (ctxt->sax != (_xmlSAXHandler *)0x0) {
        (*(code *)_xmlFree)(ctxt->sax);
      }
      ctxt->sax = sax;
      ctxt->userData = (void *)0x0;
    }
    _xmlParseExtParsedEnt(ctxt);
    if (ctxt->wellFormed == 0) {
      local_18 = (xmlDocPtr)0x0;
      _xmlFreeDoc(ctxt->myDoc);
      ctxt->myDoc = (xmlDocPtr)0x0;
    }
    else {
      local_18 = ctxt->myDoc;
    }
    if (sax != (xmlSAXHandlerPtr)0x0) {
      ctxt->sax = (_xmlSAXHandler *)0x0;
    }
    _xmlFreeParserCtxt(ctxt);
    local_30 = local_18;
  }
  return local_30;
}

