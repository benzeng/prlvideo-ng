
xmlDocPtr _xmlSAXParseMemory(xmlSAXHandlerPtr sax,char *buffer,int size,int recovery)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseMemoryWithData(sax,buffer,size,recovery,(void *)0x0);
  return pxVar1;
}

