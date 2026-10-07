
int _xmlNodeDump(xmlBufferPtr buf,xmlDocPtr doc,xmlNodePtr cur,int level,int format)

{
  uint uVar1;
  xmlOutputBufferPtr buf_00;
  long lVar2;
  xmlOutputBufferPtr pxVar3;
  int local_3c;
  
  _xmlInitParser();
  if (cur == (xmlNodePtr)0x0) {
    local_3c = -1;
  }
  else if (buf == (xmlBufferPtr)0x0) {
    local_3c = -1;
  }
  else {
    buf_00 = (xmlOutputBufferPtr)(*(code *)_xmlMalloc)(0x38);
    if (buf_00 == (xmlOutputBufferPtr)0x0) {
      FUN_10024e160("creating buffer");
      local_3c = -1;
    }
    else {
      pxVar3 = buf_00;
      for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
        pxVar3->context = (void *)0x0;
        pxVar3 = (xmlOutputBufferPtr)&pxVar3->writecallback;
      }
      buf_00->buffer = (xmlBufPtr)buf;
      buf_00->encoder = (xmlCharEncodingHandlerPtr)0x0;
      buf_00->writecallback = (xmlOutputWriteCallback)0x0;
      buf_00->closecallback = (xmlOutputCloseCallback)0x0;
      buf_00->context = (void *)0x0;
      buf_00->written = 0;
      uVar1 = buf->use;
      _xmlNodeDumpOutput(buf_00,doc,cur,level,format,(char *)0x0);
      (*(code *)_xmlFree)(buf_00);
      local_3c = buf->use - uVar1;
    }
  }
  return local_3c;
}

