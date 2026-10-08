
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlSAXParseMemoryWithData
                    (xmlSAXHandlerPtr sax,char *buffer,int size,int recovery,void *data)

{
  xmlParserCtxtPtr ctxt;
  xmlDocPtr local_40;
  xmlDocPtr local_18;
  
  ctxt = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(buffer,size);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_40 = (xmlDocPtr)0x0;
  }
  else {
    if (sax != (xmlSAXHandlerPtr)0x0) {
      if (ctxt->sax != (_xmlSAXHandler *)0x0) {
        (*(code *)_xmlFree)(ctxt->sax);
      }
      ctxt->sax = sax;
    }
    FUN_1008785ae(ctxt);
    if (data != (void *)0x0) {
      ctxt->_private = data;
    }
    ctxt->recovery = recovery;
    _xmlParseDocument(ctxt);
    if ((ctxt->wellFormed == 0) && (recovery == 0)) {
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
    local_40 = local_18;
  }
  return local_40;
}

