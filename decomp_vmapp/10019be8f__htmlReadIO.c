
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlDocPtr
_htmlReadIO(xmlInputReadCallback ioread,xmlInputCloseCallback ioclose,void *ioctx,char *URL,
           char *encoding,int options)

{
  xmlParserInputBufferPtr input;
  xmlParserCtxtPtr ctxt;
  xmlParserInputPtr pxVar1;
  undefined8 local_60;
  
  if (ioread == (xmlInputReadCallback)0x0) {
    local_60 = (htmlDocPtr)0x0;
  }
  else {
    input = _xmlParserInputBufferCreateIO(ioread,ioclose,ioctx,XML_CHAR_ENCODING_ERROR);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_60 = (htmlDocPtr)0x0;
    }
    else {
      ctxt = _xmlNewParserCtxt();
      if (ctxt == (xmlParserCtxtPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_60 = (htmlDocPtr)0x0;
      }
      else {
        pxVar1 = _xmlNewIOInputStream(ctxt,input,XML_CHAR_ENCODING_ERROR);
        if (pxVar1 == (xmlParserInputPtr)0x0) {
          _xmlFreeParserInputBuffer(input);
          _xmlFreeParserCtxt(ctxt);
          local_60 = (htmlDocPtr)0x0;
        }
        else {
          _inputPush(ctxt,pxVar1);
          local_60 = (htmlDocPtr)FUN_10019bb55(ctxt,URL,encoding,options,0);
        }
      }
    }
  }
  return local_60;
}

