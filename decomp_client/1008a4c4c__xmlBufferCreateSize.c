
xmlBufferPtr _xmlBufferCreateSize(size_t size)

{
  xmlBufferAllocationScheme *pxVar1;
  xmlChar *pxVar2;
  xmlBufferPtr local_30;
  uint local_24;
  
  local_30 = (xmlBufferPtr)(*(code *)_xmlMalloc)(0x18);
  if (local_30 == (xmlBufferPtr)0x0) {
    FUN_1008991e0("creating buffer");
    local_30 = (xmlBufferPtr)0x0;
  }
  else {
    local_30->use = 0;
    pxVar1 = ___xmlBufferAllocScheme();
    local_30->alloc = *pxVar1;
    if (size == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (int)size + 2;
    }
    local_30->size = local_24;
    if (local_30->size == 0) {
      local_30->content = (xmlChar *)0x0;
    }
    else {
      pxVar2 = (xmlChar *)(*(code *)_xmlMallocAtomic)(local_30->size);
      local_30->content = pxVar2;
      if (local_30->content == (xmlChar *)0x0) {
        FUN_1008991e0("creating buffer");
        (*(code *)_xmlFree)(local_30);
        local_30 = (xmlBufferPtr)0x0;
      }
      else {
        *local_30->content = '\0';
      }
    }
  }
  return local_30;
}

