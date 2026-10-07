
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

htmlDocPtr _htmlCtxtReadFd(xmlParserCtxtPtr ctxt,int fd,char *URL,char *encoding,int options)

{
  xmlParserInputBufferPtr input;
  xmlParserInputPtr pxVar1;
  undefined8 local_48;
  
  if (fd < 0) {
    local_48 = (htmlDocPtr)0x0;
  }
  else if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_48 = (htmlDocPtr)0x0;
  }
  else {
    _htmlCtxtReset(ctxt);
    input = _xmlParserInputBufferCreateFd(fd,XML_CHAR_ENCODING_ERROR);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_48 = (htmlDocPtr)0x0;
    }
    else {
      pxVar1 = _xmlNewIOInputStream(ctxt,input,XML_CHAR_ENCODING_ERROR);
      if (pxVar1 == (xmlParserInputPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_48 = (htmlDocPtr)0x0;
      }
      else {
        _inputPush(ctxt,pxVar1);
        local_48 = (htmlDocPtr)FUN_10019bb55(ctxt,URL,encoding,options,1);
      }
    }
  }
  return local_48;
}

