
int _xmlParserInputGrow(xmlParserInputPtr in,int len)

{
  xmlChar *pxVar1;
  int local_28;
  
  if (in == (xmlParserInputPtr)0x0) {
    local_28 = -1;
  }
  else if (in->buf == (xmlParserInputBufferPtr)0x0) {
    local_28 = -1;
  }
  else if (in->base == (xmlChar *)0x0) {
    local_28 = -1;
  }
  else if (in->cur == (xmlChar *)0x0) {
    local_28 = -1;
  }
  else if (in->buf->buffer == (xmlBufPtr)0x0) {
    local_28 = -1;
  }
  else if (((int)in->cur - (int)in->base) + 0xfaU < *(uint *)(in->buf->buffer + 8)) {
    local_28 = 0;
  }
  else if (in->buf->readcallback == (xmlInputReadCallback)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = _xmlParserInputBufferGrow(in->buf,len);
    if (in->base != *(xmlChar **)in->buf->buffer) {
      pxVar1 = in->base;
      in->base = *(xmlChar **)in->buf->buffer;
      in->cur = (xmlChar *)(*(long *)in->buf->buffer + (long)((int)in->cur - (int)pxVar1));
    }
    in->end = (xmlChar *)(*(long *)in->buf->buffer + (ulong)*(uint *)(in->buf->buffer + 8));
  }
  return local_28;
}

