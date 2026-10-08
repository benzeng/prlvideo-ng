
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlBufferPtr _xmlBufferCreate(void)

{
  uint *puVar1;
  xmlBufferAllocationScheme *pxVar2;
  xmlChar *pxVar3;
  xmlBufferPtr local_20;
  
  local_20 = (xmlBufferPtr)(*(code *)_xmlMalloc)(0x18);
  if (local_20 == (xmlBufferPtr)0x0) {
    FUN_1008991e0("creating buffer");
    local_20 = (xmlBufferPtr)0x0;
  }
  else {
    local_20->use = 0;
    puVar1 = (uint *)___xmlDefaultBufferSize();
    local_20->size = *puVar1;
    pxVar2 = ___xmlBufferAllocScheme();
    local_20->alloc = *pxVar2;
    pxVar3 = (xmlChar *)(*(code *)_xmlMallocAtomic)(local_20->size);
    local_20->content = pxVar3;
    if (local_20->content == (xmlChar *)0x0) {
      FUN_1008991e0("creating buffer");
      (*(code *)_xmlFree)(local_20);
      local_20 = (xmlBufferPtr)0x0;
    }
    else {
      *local_20->content = '\0';
    }
  }
  return local_20;
}

