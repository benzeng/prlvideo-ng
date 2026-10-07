
xmlBufferPtr _xmlBufferCreateStatic(void *mem,size_t size)

{
  xmlBufferPtr local_30;
  
  if ((mem == (void *)0x0) || (size == 0)) {
    local_30 = (xmlBufferPtr)0x0;
  }
  else {
    local_30 = (xmlBufferPtr)(*(code *)_xmlMalloc)(0x18);
    if (local_30 == (xmlBufferPtr)0x0) {
      FUN_1001658b8("creating buffer");
      local_30 = (xmlBufferPtr)0x0;
    }
    else {
      local_30->use = (uint)size;
      local_30->size = (uint)size;
      local_30->alloc = XML_BUFFER_ALLOC_IMMUTABLE;
      local_30->content = mem;
    }
  }
  return local_30;
}

