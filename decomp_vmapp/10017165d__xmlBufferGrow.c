
int _xmlBufferGrow(xmlBufferPtr buf,uint len)

{
  uint uVar1;
  xmlChar *pxVar2;
  int local_28;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_28 = -1;
  }
  else if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
    local_28 = 0;
  }
  else if (buf->use + len < buf->size) {
    local_28 = 0;
  }
  else {
    uVar1 = buf->use + len + 100;
    pxVar2 = (xmlChar *)(*(code *)_xmlRealloc)(buf->content,(long)(int)uVar1);
    if (pxVar2 == (xmlChar *)0x0) {
      FUN_1001658b8("growing buffer");
      local_28 = -1;
    }
    else {
      buf->content = pxVar2;
      buf->size = uVar1;
      local_28 = buf->size - buf->use;
    }
  }
  return local_28;
}

