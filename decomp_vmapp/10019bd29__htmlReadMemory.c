
htmlDocPtr _htmlReadMemory(char *buffer,int size,char *URL,char *encoding,int options)

{
  long *plVar1;
  xmlSAXHandlerV1 *pxVar2;
  undefined8 local_48;
  
  plVar1 = (long *)_xmlCreateMemoryParserCtxt(buffer,size);
  if (plVar1 == (long *)0x0) {
    local_48 = (htmlDocPtr)0x0;
  }
  else {
    if (*plVar1 != 0) {
      pxVar2 = ___htmlDefaultSAXHandler();
      _memcpy((void *)*plVar1,pxVar2,0xe0);
    }
    local_48 = (htmlDocPtr)FUN_10019bb55(plVar1,URL,encoding,options,0);
  }
  return local_48;
}

