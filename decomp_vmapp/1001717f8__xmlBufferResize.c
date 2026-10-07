
int _xmlBufferResize(xmlBufferPtr buf,uint size)

{
  ulong uVar1;
  xmlChar *pxVar2;
  xmlChar *pxVar3;
  int local_30;
  uint local_28;
  uint local_14;
  xmlChar *local_10;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_30 = 0;
  }
  else if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
    local_30 = 0;
  }
  else if (size < buf->size) {
    local_30 = 1;
  }
  else {
    if (buf->alloc == XML_BUFFER_ALLOC_DOUBLEIT) {
      if (buf->size == 0) {
        local_28 = size + 10;
      }
      else {
        local_28 = buf->size * 2;
      }
      for (local_14 = local_28; local_14 < size; local_14 = local_14 << 1) {
      }
    }
    else if (buf->alloc == XML_BUFFER_ALLOC_EXACT) {
      local_14 = size + 10;
    }
    else {
      local_14 = size + 10;
    }
    if (buf->content == (xmlChar *)0x0) {
      local_10 = (xmlChar *)(*(code *)_xmlMallocAtomic)(local_14);
    }
    else if (buf->size - buf->use < 100) {
      local_10 = (xmlChar *)(*(code *)_xmlRealloc)(buf->content,local_14);
    }
    else {
      local_10 = (xmlChar *)(*(code *)_xmlMallocAtomic)(local_14);
      if (local_10 != (xmlChar *)0x0) {
        pxVar2 = buf->content;
        pxVar3 = local_10;
        for (uVar1 = (ulong)buf->use; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pxVar3 = *pxVar2;
          pxVar2 = pxVar2 + 1;
          pxVar3 = pxVar3 + 1;
        }
        (*(code *)_xmlFree)(buf->content);
        local_10[buf->use] = '\0';
      }
    }
    if (local_10 == (xmlChar *)0x0) {
      FUN_1001658b8("growing buffer");
      local_30 = 0;
    }
    else {
      buf->content = local_10;
      buf->size = local_14;
      local_30 = 1;
    }
  }
  return local_30;
}

