
xmlDocPtr _xmlRecoverFile(char *filename)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseFile((xmlSAXHandlerPtr)0x0,filename,1);
  return pxVar1;
}

