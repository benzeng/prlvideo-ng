
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

htmlParserCtxtPtr FUN_1008cc531(xmlChar *param_1,xmlChar *param_2)

{
  xmlParserInputPtr pxVar1;
  int size;
  xmlCharEncoding xVar2;
  xmlChar *pxVar3;
  xmlCharEncodingHandlerPtr pxVar4;
  htmlParserCtxtPtr local_50;
  
  if (param_1 == (xmlChar *)0x0) {
    local_50 = (htmlParserCtxtPtr)0x0;
  }
  else {
    size = _xmlStrlen(param_1);
    local_50 = _htmlCreateMemoryParserCtxt((char *)param_1,size);
    if (param_2 != (xmlChar *)0x0) {
      if (local_50->input->encoding != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_50->input->encoding);
      }
      pxVar1 = local_50->input;
      pxVar3 = _xmlStrdup(param_2);
      pxVar1->encoding = pxVar3;
      xVar2 = _xmlParseCharEncoding((char *)param_2);
      if (xVar2 == ~XML_CHAR_ENCODING_ERROR) {
        pxVar4 = _xmlFindCharEncodingHandler((char *)param_2);
        if (pxVar4 == (xmlCharEncodingHandlerPtr)0x0) {
          FUN_1008c3ec0(local_50,0x20,"Unsupported encoding %s\n",param_2,0);
        }
        else {
          _xmlSwitchToEncoding(local_50,pxVar4);
        }
      }
      else {
        _xmlSwitchEncoding(local_50,xVar2);
        if (local_50->errNo == 0x20) {
          FUN_1008c3ec0(local_50,0x20,"Unsupported encoding %s\n",param_2,0);
        }
      }
    }
  }
  return local_50;
}

