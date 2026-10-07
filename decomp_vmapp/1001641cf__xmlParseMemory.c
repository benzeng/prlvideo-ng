
xmlDocPtr _xmlParseMemory(char *buffer,int size)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseMemory((xmlSAXHandlerPtr)0x0,buffer,size,0);
  return pxVar1;
}

