
xmlDocPtr _xmlParseFile(char *filename)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseFile((xmlSAXHandlerPtr)0x0,filename,0);
  return pxVar1;
}

