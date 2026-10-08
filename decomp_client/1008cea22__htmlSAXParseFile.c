
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlDocPtr _htmlSAXParseFile(char *filename,char *encoding,htmlSAXHandlerPtr sax,void *userData)

{
  htmlParserCtxtPtr ctxt;
  xmlDocPtr local_50;
  _xmlSAXHandler *local_10;
  
  local_10 = (_xmlSAXHandler *)0x0;
  _xmlInitParser();
  ctxt = (htmlParserCtxtPtr)_htmlCreateFileParserCtxt(filename,encoding);
  if (ctxt == (htmlParserCtxtPtr)0x0) {
    local_50 = (xmlDocPtr)0x0;
  }
  else {
    if (sax != (htmlSAXHandlerPtr)0x0) {
      local_10 = ctxt->sax;
      ctxt->sax = sax;
      ctxt->userData = userData;
    }
    _htmlParseDocument(ctxt);
    local_50 = ctxt->myDoc;
    if (sax != (htmlSAXHandlerPtr)0x0) {
      ctxt->sax = local_10;
      ctxt->userData = (void *)0x0;
    }
    _htmlFreeParserCtxt(ctxt);
  }
  return local_50;
}

