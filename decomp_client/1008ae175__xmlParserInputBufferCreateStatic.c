
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlParserInputBufferCreateStatic(char *mem,int size,xmlCharEncoding enc)

{
  xmlBufferPtr pxVar1;
  xmlCharEncodingHandlerPtr pxVar2;
  int *piVar3;
  long lVar4;
  xmlParserInputBufferPtr pxVar5;
  xmlParserInputBufferPtr local_30;
  
  if (size < 1) {
    local_30 = (xmlParserInputBufferPtr)0x0;
  }
  else if (mem == (char *)0x0) {
    local_30 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    local_30 = (xmlParserInputBufferPtr)(*(code *)_xmlMalloc)(0x40);
    if (local_30 == (xmlParserInputBufferPtr)0x0) {
      FUN_1008ab1c7("creating input buffer");
      local_30 = (xmlParserInputBufferPtr)0x0;
    }
    else {
      pxVar5 = local_30;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        pxVar5->context = (void *)0x0;
        pxVar5 = (xmlParserInputBufferPtr)&pxVar5->readcallback;
      }
      pxVar1 = _xmlBufferCreateStatic(mem,(long)size);
      local_30->buffer = (xmlBufPtr)pxVar1;
      if (local_30->buffer == (xmlBufPtr)0x0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = (xmlParserInputBufferPtr)0x0;
      }
      else {
        pxVar2 = _xmlGetCharEncodingHandler(enc);
        local_30->encoder = pxVar2;
        if (local_30->encoder == (xmlCharEncodingHandlerPtr)0x0) {
          local_30->raw = (xmlBufPtr)0x0;
        }
        else {
          piVar3 = ___xmlDefaultBufferSize();
          pxVar1 = _xmlBufferCreateSize((long)(*piVar3 * 2));
          local_30->raw = (xmlBufPtr)pxVar1;
        }
        local_30->compressed = -1;
        local_30->context = mem;
        local_30->readcallback = (xmlInputReadCallback)0x0;
        local_30->closecallback = (xmlInputCloseCallback)0x0;
      }
    }
  }
  return local_30;
}

