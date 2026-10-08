
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr FUN_1008cf47d(htmlParserCtxtPtr param_1,xmlChar *param_2,char *param_3,int param_4,
                       int param_5)

{
  xmlParserInputPtr pxVar1;
  xmlDocPtr pxVar2;
  xmlCharEncodingHandlerPtr pxVar3;
  xmlChar *pxVar4;
  
  _htmlCtxtUseOptions(param_1,param_4);
  param_1->html = 1;
  if (param_3 != (char *)0x0) {
    pxVar3 = _xmlFindCharEncodingHandler(param_3);
    if (pxVar3 != (xmlCharEncodingHandlerPtr)0x0) {
      _xmlSwitchToEncoding(param_1,pxVar3);
    }
  }
  if (((param_2 != (xmlChar *)0x0) && (param_1->input != (xmlParserInputPtr)0x0)) &&
     (param_1->input->filename == (char *)0x0)) {
    pxVar1 = param_1->input;
    pxVar4 = _xmlStrdup(param_2);
    pxVar1->filename = (char *)pxVar4;
  }
  _htmlParseDocument(param_1);
  pxVar2 = param_1->myDoc;
  param_1->myDoc = (xmlDocPtr)0x0;
  if (param_5 == 0) {
    if (((param_1->dictNames != 0) && (pxVar2 != (xmlDocPtr)0x0)) && (pxVar2->dict == param_1->dict)
       ) {
      param_1->dict = (xmlDictPtr)0x0;
    }
    _xmlFreeParserCtxt(param_1);
  }
  return pxVar2;
}

