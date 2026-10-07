
int FUN_10019cc27(xmlBufPtr param_1,xmlDocPtr param_2,xmlNodePtr param_3,int param_4)

{
  xmlOutputBufferPtr buf;
  long lVar1;
  xmlOutputBufferPtr pxVar2;
  int local_38;
  
  if (param_3 == (xmlNodePtr)0x0) {
    local_38 = -1;
  }
  else if (param_1 == (xmlBufPtr)0x0) {
    local_38 = -1;
  }
  else {
    buf = (xmlOutputBufferPtr)(*(code *)_xmlMalloc)(0x38);
    if (buf == (xmlOutputBufferPtr)0x0) {
      FUN_10019cb4a("allocating HTML output buffer");
      local_38 = -1;
    }
    else {
      pxVar2 = buf;
      for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
        pxVar2->context = (void *)0x0;
        pxVar2 = (xmlOutputBufferPtr)&pxVar2->writecallback;
      }
      buf->buffer = param_1;
      buf->encoder = (xmlCharEncodingHandlerPtr)0x0;
      buf->writecallback = (xmlOutputWriteCallback)0x0;
      buf->closecallback = (xmlOutputCloseCallback)0x0;
      buf->context = (void *)0x0;
      buf->written = 0;
      local_38 = *(int *)(param_1 + 8);
      _htmlNodeDumpFormatOutput(buf,param_2,param_3,(char *)0x0,param_4);
      (*(code *)_xmlFree)(buf);
      local_38 = *(int *)(param_1 + 8) - local_38;
    }
  }
  return local_38;
}

