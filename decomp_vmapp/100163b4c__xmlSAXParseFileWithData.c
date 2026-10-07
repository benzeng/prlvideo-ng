
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlSAXParseFileWithData(xmlSAXHandlerPtr sax,char *filename,int recovery,void *data)

{
  xmlParserCtxtPtr ctxt;
  xmlChar *pxVar1;
  xmlDocPtr local_50;
  xmlDocPtr local_20;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  _xmlInitParser();
  ctxt = (xmlParserCtxtPtr)_xmlCreateFileParserCtxt(filename);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_50 = (xmlDocPtr)0x0;
  }
  else {
    if (sax != (xmlSAXHandlerPtr)0x0) {
      if (ctxt->sax != (_xmlSAXHandler *)0x0) {
        (*(code *)_xmlFree)(ctxt->sax);
      }
      ctxt->sax = sax;
    }
    FUN_100144c86(ctxt);
    if (data != (void *)0x0) {
      ctxt->_private = data;
    }
    if (ctxt->directory == (char *)0x0) {
      local_10 = (xmlChar *)_xmlParserGetDirectory(filename);
    }
    if ((ctxt->directory == (char *)0x0) && (local_10 != (xmlChar *)0x0)) {
      pxVar1 = _xmlStrdup(local_10);
      ctxt->directory = (char *)pxVar1;
    }
    ctxt->recovery = recovery;
    _xmlParseDocument(ctxt);
    if ((ctxt->wellFormed == 0) && (recovery == 0)) {
      local_20 = (xmlDocPtr)0x0;
      _xmlFreeDoc(ctxt->myDoc);
      ctxt->myDoc = (xmlDocPtr)0x0;
    }
    else {
      local_20 = ctxt->myDoc;
      if (local_20 != (xmlDocPtr)0x0) {
        if (ctxt->input->buf->compressed < 1) {
          local_20->compression = ctxt->input->buf->compressed;
        }
        else {
          local_20->compression = 9;
        }
      }
    }
    if (sax != (xmlSAXHandlerPtr)0x0) {
      ctxt->sax = (_xmlSAXHandler *)0x0;
    }
    _xmlFreeParserCtxt(ctxt);
    local_50 = local_20;
  }
  return local_50;
}

