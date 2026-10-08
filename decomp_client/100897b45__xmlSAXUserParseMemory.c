
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlSAXUserParseMemory(xmlSAXHandlerPtr sax,void *user_data,char *buffer,int size)

{
  _xmlSAXHandler *p_Var1;
  xmlParserCtxtPtr ctxt;
  int local_48;
  int local_1c;
  
  if (sax == (xmlSAXHandlerPtr)0x0) {
    local_48 = -1;
  }
  else {
    ctxt = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(buffer,size);
    if (ctxt == (xmlParserCtxtPtr)0x0) {
      local_48 = -1;
    }
    else {
      p_Var1 = ctxt->sax;
      ctxt->sax = sax;
      FUN_1008785ae(ctxt);
      if (user_data != (void *)0x0) {
        ctxt->userData = user_data;
      }
      _xmlParseDocument(ctxt);
      if (ctxt->wellFormed == 0) {
        if (ctxt->errNo == 0) {
          local_1c = -1;
        }
        else {
          local_1c = ctxt->errNo;
        }
      }
      else {
        local_1c = 0;
      }
      ctxt->sax = p_Var1;
      if (ctxt->myDoc != (xmlDocPtr)0x0) {
        _xmlFreeDoc(ctxt->myDoc);
        ctxt->myDoc = (xmlDocPtr)0x0;
      }
      _xmlFreeParserCtxt(ctxt);
      local_48 = local_1c;
    }
  }
  return local_48;
}

