
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlDocPtr _htmlSAXParseDoc(xmlChar *cur,char *encoding,htmlSAXHandlerPtr sax,void *userData)

{
  htmlParserCtxtPtr ctxt;
  xmlDocPtr local_40;
  
  _xmlInitParser();
  if (cur == (xmlChar *)0x0) {
    local_40 = (xmlDocPtr)0x0;
  }
  else {
    ctxt = (htmlParserCtxtPtr)FUN_100198c09(cur,encoding);
    if (ctxt == (htmlParserCtxtPtr)0x0) {
      local_40 = (xmlDocPtr)0x0;
    }
    else {
      if (sax != (htmlSAXHandlerPtr)0x0) {
        if (ctxt->sax != (_xmlSAXHandler *)0x0) {
          (*(code *)_xmlFree)(ctxt->sax);
        }
        ctxt->sax = sax;
        ctxt->userData = userData;
      }
      _htmlParseDocument(ctxt);
      local_40 = ctxt->myDoc;
      if (sax != (htmlSAXHandlerPtr)0x0) {
        ctxt->sax = (_xmlSAXHandler *)0x0;
        ctxt->userData = (void *)0x0;
      }
      _htmlFreeParserCtxt(ctxt);
    }
  }
  return local_40;
}

