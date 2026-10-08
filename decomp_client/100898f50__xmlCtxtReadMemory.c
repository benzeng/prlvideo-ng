
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlDocPtr _xmlCtxtReadMemory(xmlParserCtxtPtr ctxt,char *buffer,int size,char *URL,char *encoding,
                            int options)

{
  xmlParserInputBufferPtr input;
  xmlParserInputPtr pxVar1;
  undefined8 local_50;
  
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_50 = (xmlDocPtr)0x0;
  }
  else if (buffer == (char *)0x0) {
    local_50 = (xmlDocPtr)0x0;
  }
  else {
    _xmlCtxtReset(ctxt);
    input = _xmlParserInputBufferCreateMem(buffer,size,XML_CHAR_ENCODING_ERROR);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_50 = (xmlDocPtr)0x0;
    }
    else {
      pxVar1 = _xmlNewIOInputStream(ctxt,input,XML_CHAR_ENCODING_ERROR);
      if (pxVar1 == (xmlParserInputPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_50 = (xmlDocPtr)0x0;
      }
      else {
        _inputPush(ctxt,pxVar1);
        local_50 = (xmlDocPtr)FUN_100898a20(ctxt,URL,encoding,options,1);
      }
    }
  }
  return local_50;
}

