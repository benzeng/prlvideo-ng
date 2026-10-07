
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlDocPtr _xmlCtxtReadFd(xmlParserCtxtPtr ctxt,int fd,char *URL,char *encoding,int options)

{
  xmlParserInputBufferPtr input;
  xmlParserInputPtr pxVar1;
  xmlDocPtr local_48;
  
  if (fd < 0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else {
    _xmlCtxtReset(ctxt);
    input = _xmlParserInputBufferCreateFd(fd,XML_CHAR_ENCODING_ERROR);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_48 = (xmlDocPtr)0x0;
    }
    else {
      input->closecallback = (xmlInputCloseCallback)0x0;
      pxVar1 = _xmlNewIOInputStream(ctxt,input,XML_CHAR_ENCODING_ERROR);
      if (pxVar1 == (xmlParserInputPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_48 = (xmlDocPtr)0x0;
      }
      else {
        _inputPush(ctxt,pxVar1);
        local_48 = (xmlDocPtr)FUN_1001650f8(ctxt,URL,encoding,options,1);
      }
    }
  }
  return local_48;
}

