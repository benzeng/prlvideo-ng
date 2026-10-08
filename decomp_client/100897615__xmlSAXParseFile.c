
xmlDocPtr _xmlSAXParseFile(xmlSAXHandlerPtr sax,char *filename,int recovery)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseFileWithData(sax,filename,recovery,(void *)0x0);
  return pxVar1;
}

