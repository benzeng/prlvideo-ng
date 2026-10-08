
xmlDocPtr _xmlReadMemory(char *buffer,int size,char *URL,char *encoding,int options)

{
  long lVar1;
  undefined8 local_48;
  
  lVar1 = _xmlCreateMemoryParserCtxt(buffer,size);
  if (lVar1 == 0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else {
    local_48 = (xmlDocPtr)FUN_100898a20(lVar1,URL,encoding,options,0);
  }
  return local_48;
}

