
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlAllocParserInputBuffer(xmlCharEncoding enc)

{
  int *piVar1;
  xmlBufferPtr pxVar2;
  xmlCharEncodingHandlerPtr pxVar3;
  long lVar4;
  xmlParserInputBufferPtr pxVar5;
  xmlParserInputBufferPtr local_28;
  
  local_28 = (xmlParserInputBufferPtr)(*(code *)_xmlMalloc)(0x40);
  if (local_28 == (xmlParserInputBufferPtr)0x0) {
    FUN_1008ab1c7("creating input buffer");
    local_28 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    pxVar5 = local_28;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      pxVar5->context = (void *)0x0;
      pxVar5 = (xmlParserInputBufferPtr)&pxVar5->readcallback;
    }
    piVar1 = ___xmlDefaultBufferSize();
    pxVar2 = _xmlBufferCreateSize((long)(*piVar1 * 2));
    local_28->buffer = (xmlBufPtr)pxVar2;
    if (local_28->buffer == (xmlBufPtr)0x0) {
      (*(code *)_xmlFree)(local_28);
      local_28 = (xmlParserInputBufferPtr)0x0;
    }
    else {
      *(undefined4 *)(local_28->buffer + 0x10) = 0;
      pxVar3 = _xmlGetCharEncodingHandler(enc);
      local_28->encoder = pxVar3;
      if (local_28->encoder == (xmlCharEncodingHandlerPtr)0x0) {
        local_28->raw = (xmlBufPtr)0x0;
      }
      else {
        piVar1 = ___xmlDefaultBufferSize();
        pxVar2 = _xmlBufferCreateSize((long)(*piVar1 * 2));
        local_28->raw = (xmlBufPtr)pxVar2;
      }
      local_28->readcallback = (xmlInputReadCallback)0x0;
      local_28->closecallback = (xmlInputCloseCallback)0x0;
      local_28->context = (void *)0x0;
      local_28->compressed = -1;
      local_28->rawconsumed = 0;
    }
  }
  return local_28;
}

