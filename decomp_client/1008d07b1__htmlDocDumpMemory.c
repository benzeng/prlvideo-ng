
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void _htmlDocDumpMemory(xmlDocPtr cur,xmlChar **mem,int *size)

{
  xmlCharEncoding xVar1;
  xmlChar *pxVar2;
  xmlOutputBufferPtr buf;
  xmlCharEncodingHandlerPtr local_20;
  
  local_20 = (xmlCharEncodingHandlerPtr)0x0;
  _xmlInitParser();
  if ((mem != (xmlChar **)0x0) && (size != (int *)0x0)) {
    if (cur == (xmlDocPtr)0x0) {
      *mem = (xmlChar *)0x0;
      *size = 0;
    }
    else {
      pxVar2 = _htmlGetMetaEncoding(cur);
      if (pxVar2 != (xmlChar *)0x0) {
        xVar1 = _xmlParseCharEncoding((char *)pxVar2);
        if (cur->charset == xVar1) {
          local_20 = _xmlFindCharEncodingHandler((char *)pxVar2);
        }
        else {
          if (cur->charset != 1) {
            *mem = (xmlChar *)0x0;
            *size = 0;
            return;
          }
          local_20 = _xmlFindCharEncodingHandler((char *)pxVar2);
          if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
            *mem = (xmlChar *)0x0;
            *size = 0;
            return;
          }
        }
      }
      if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
        local_20 = _xmlFindCharEncodingHandler("HTML");
      }
      if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
        local_20 = _xmlFindCharEncodingHandler("ascii");
      }
      buf = _xmlAllocOutputBuffer(local_20);
      if (buf == (xmlOutputBufferPtr)0x0) {
        *mem = (xmlChar *)0x0;
        *size = 0;
      }
      else {
        _htmlDocContentDumpOutput(buf,cur,(char *)0x0);
        _xmlOutputBufferFlush(buf);
        if (buf->conv == (xmlBufPtr)0x0) {
          *size = *(int *)(buf->buffer + 8);
          pxVar2 = _xmlStrndup(*(xmlChar **)buf->buffer,*size);
          *mem = pxVar2;
        }
        else {
          *size = *(int *)(buf->conv + 8);
          pxVar2 = _xmlStrndup(*(xmlChar **)buf->conv,*size);
          *mem = pxVar2;
        }
        _xmlOutputBufferClose(buf);
      }
    }
  }
  return;
}

