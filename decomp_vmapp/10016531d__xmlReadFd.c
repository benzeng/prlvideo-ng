
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlReadFd(int fd,char *URL,char *encoding,int options)

{
  xmlParserInputBufferPtr input;
  xmlParserCtxtPtr ctxt;
  xmlParserInputPtr pxVar1;
  xmlDocPtr local_50;
  
  if (fd < 0) {
    local_50 = (xmlDocPtr)0x0;
  }
  else {
    input = _xmlParserInputBufferCreateFd(fd,XML_CHAR_ENCODING_ERROR);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_50 = (xmlDocPtr)0x0;
    }
    else {
      input->closecallback = (xmlInputCloseCallback)0x0;
      ctxt = _xmlNewParserCtxt();
      if (ctxt == (xmlParserCtxtPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_50 = (xmlDocPtr)0x0;
      }
      else {
        pxVar1 = _xmlNewIOInputStream(ctxt,input,XML_CHAR_ENCODING_ERROR);
        if (pxVar1 == (xmlParserInputPtr)0x0) {
          _xmlFreeParserInputBuffer(input);
          _xmlFreeParserCtxt(ctxt);
          local_50 = (xmlDocPtr)0x0;
        }
        else {
          _inputPush(ctxt,pxVar1);
          local_50 = (xmlDocPtr)FUN_1001650f8(ctxt,URL,encoding,options,0);
        }
      }
    }
  }
  return local_50;
}

