
xmlDocPtr _xmlParseDoc(xmlChar *cur)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseDoc((xmlSAXHandlerPtr)0x0,cur,0);
  return pxVar1;
}

