
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr FUN_100898a20(xmlParserCtxtPtr param_1,xmlChar *param_2,char *param_3,int param_4,
                       int param_5)

{
  xmlParserInputPtr pxVar1;
  xmlCharEncodingHandlerPtr pxVar2;
  xmlChar *pxVar3;
  xmlDocPtr local_28;
  
  _xmlCtxtUseOptions(param_1,param_4);
  if (param_3 != (char *)0x0) {
    pxVar2 = _xmlFindCharEncodingHandler(param_3);
    if (pxVar2 != (xmlCharEncodingHandlerPtr)0x0) {
      _xmlSwitchToEncoding(param_1,pxVar2);
    }
  }
  if (((param_2 != (xmlChar *)0x0) && (param_1->input != (xmlParserInputPtr)0x0)) &&
     (param_1->input->filename == (char *)0x0)) {
    pxVar1 = param_1->input;
    pxVar3 = _xmlStrdup(param_2);
    pxVar1->filename = (char *)pxVar3;
  }
  _xmlParseDocument(param_1);
  if ((param_1->wellFormed == 0) && (param_1->recovery == 0)) {
    local_28 = (xmlDocPtr)0x0;
    if (param_1->myDoc != (xmlDocPtr)0x0) {
      _xmlFreeDoc(param_1->myDoc);
    }
  }
  else {
    local_28 = param_1->myDoc;
  }
  param_1->myDoc = (xmlDocPtr)0x0;
  if (param_5 == 0) {
    _xmlFreeParserCtxt(param_1);
  }
  return local_28;
}

