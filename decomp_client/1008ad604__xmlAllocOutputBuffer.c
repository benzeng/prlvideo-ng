
xmlOutputBufferPtr _xmlAllocOutputBuffer(xmlCharEncodingHandlerPtr encoder)

{
  xmlBufferPtr pxVar1;
  long lVar2;
  xmlOutputBufferPtr pxVar3;
  xmlOutputBufferPtr local_28;
  
  local_28 = (xmlOutputBufferPtr)(*(code *)_xmlMalloc)(0x38);
  if (local_28 == (xmlOutputBufferPtr)0x0) {
    FUN_1008ab1c7("creating output buffer");
    local_28 = (xmlOutputBufferPtr)0x0;
  }
  else {
    pxVar3 = local_28;
    for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
      pxVar3->context = (void *)0x0;
      pxVar3 = (xmlOutputBufferPtr)&pxVar3->writecallback;
    }
    pxVar1 = _xmlBufferCreate();
    local_28->buffer = (xmlBufPtr)pxVar1;
    if (local_28->buffer == (xmlBufPtr)0x0) {
      (*(code *)_xmlFree)(local_28);
      local_28 = (xmlOutputBufferPtr)0x0;
    }
    else {
      *(undefined4 *)(local_28->buffer + 0x10) = 0;
      local_28->encoder = encoder;
      if (encoder == (xmlCharEncodingHandlerPtr)0x0) {
        local_28->conv = (xmlBufPtr)0x0;
      }
      else {
        pxVar1 = _xmlBufferCreateSize(4000);
        local_28->conv = (xmlBufPtr)pxVar1;
        _xmlCharEncOutFunc(encoder,(xmlBufferPtr)local_28->conv,(xmlBufferPtr)0x0);
      }
      local_28->writecallback = (xmlOutputWriteCallback)0x0;
      local_28->closecallback = (xmlOutputCloseCallback)0x0;
      local_28->context = (void *)0x0;
      local_28->written = 0;
    }
  }
  return local_28;
}

