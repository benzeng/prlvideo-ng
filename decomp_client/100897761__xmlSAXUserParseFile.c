
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlSAXUserParseFile(xmlSAXHandlerPtr sax,void *user_data,char *filename)

{
  _xmlSAXHandler *p_Var1;
  xmlParserCtxtPtr ctxt;
  _xmlSAXHandler *p_Var2;
  int local_44;
  int local_24;
  
  ctxt = (xmlParserCtxtPtr)_xmlCreateFileParserCtxt(filename);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_44 = -1;
  }
  else {
    p_Var1 = ctxt->sax;
    p_Var2 = (_xmlSAXHandler *)___xmlDefaultSAXHandler();
    if (p_Var1 != p_Var2) {
      (*(code *)_xmlFree)(ctxt->sax);
    }
    ctxt->sax = sax;
    FUN_1008785ae(ctxt);
    if (user_data != (void *)0x0) {
      ctxt->userData = user_data;
    }
    _xmlParseDocument(ctxt);
    if (ctxt->wellFormed == 0) {
      if (ctxt->errNo == 0) {
        local_24 = -1;
      }
      else {
        local_24 = ctxt->errNo;
      }
    }
    else {
      local_24 = 0;
    }
    if (sax != (xmlSAXHandlerPtr)0x0) {
      ctxt->sax = (_xmlSAXHandler *)0x0;
    }
    if (ctxt->myDoc != (xmlDocPtr)0x0) {
      _xmlFreeDoc(ctxt->myDoc);
      ctxt->myDoc = (xmlDocPtr)0x0;
    }
    _xmlFreeParserCtxt(ctxt);
    local_44 = local_24;
  }
  return local_44;
}

