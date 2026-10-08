
void _xmlBufferEmpty(xmlBufferPtr buf)

{
  ulong uVar1;
  xmlChar *pxVar2;
  
  if ((buf != (xmlBufferPtr)0x0) && (buf->content != (xmlChar *)0x0)) {
    buf->use = 0;
    if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
      buf->content = (xmlChar *)"";
    }
    else {
      pxVar2 = buf->content;
      for (uVar1 = (ulong)buf->size; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pxVar2 = '\0';
        pxVar2 = pxVar2 + 1;
      }
    }
  }
  return;
}

