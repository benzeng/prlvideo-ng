
xmlDocPtr _xmlRecoverMemory(char *buffer,int size)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseMemory((xmlSAXHandlerPtr)0x0,buffer,size,1);
  return pxVar1;
}

