
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr
_xmlCreateIOParserCtxt
          (xmlSAXHandlerPtr sax,void *user_data,xmlInputReadCallback ioread,
          xmlInputCloseCallback ioclose,void *ioctx,xmlCharEncoding enc)

{
  xmlParserInputBufferPtr input;
  _xmlSAXHandler *p_Var1;
  _xmlSAXHandler *p_Var2;
  xmlParserInputPtr pxVar3;
  xmlParserCtxtPtr local_70;
  
  if (ioread == (xmlInputReadCallback)0x0) {
    local_70 = (xmlParserCtxtPtr)0x0;
  }
  else {
    input = _xmlParserInputBufferCreateIO(ioread,ioclose,ioctx,enc);
    if (input == (xmlParserInputBufferPtr)0x0) {
      local_70 = (xmlParserCtxtPtr)0x0;
    }
    else {
      local_70 = _xmlNewParserCtxt();
      if (local_70 == (xmlParserCtxtPtr)0x0) {
        _xmlFreeParserInputBuffer(input);
        local_70 = (xmlParserCtxtPtr)0x0;
      }
      else {
        if (sax != (xmlSAXHandlerPtr)0x0) {
          p_Var2 = local_70->sax;
          p_Var1 = (_xmlSAXHandler *)___xmlDefaultSAXHandler();
          if (p_Var2 != p_Var1) {
            (*(code *)_xmlFree)(local_70->sax);
          }
          p_Var2 = (_xmlSAXHandler *)(*(code *)_xmlMalloc)(0x100);
          local_70->sax = p_Var2;
          if (local_70->sax == (_xmlSAXHandler *)0x0) {
            _xmlErrMemory(local_70,0);
            _xmlFreeParserCtxt(local_70);
            return (xmlParserCtxtPtr)0x0;
          }
          _memset(local_70->sax,0,0x100);
          if (sax->initialized == 0xdeedbeaf) {
            _memcpy(local_70->sax,sax,0x100);
          }
          else {
            _memcpy(local_70->sax,sax,0xe0);
          }
          if (user_data != (void *)0x0) {
            local_70->userData = user_data;
          }
        }
        pxVar3 = _xmlNewIOInputStream(local_70,input,enc);
        if (pxVar3 == (xmlParserInputPtr)0x0) {
          _xmlFreeParserCtxt(local_70);
          local_70 = (xmlParserCtxtPtr)0x0;
        }
        else {
          _inputPush(local_70,pxVar3);
        }
      }
    }
  }
  return local_70;
}

