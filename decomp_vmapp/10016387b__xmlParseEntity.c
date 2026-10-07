
xmlDocPtr _xmlParseEntity(char *filename)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseEntity((xmlSAXHandlerPtr)0x0,filename);
  return pxVar1;
}

