
xmlDocPtr _xmlRecoverDoc(xmlChar *cur)

{
  xmlDocPtr pxVar1;
  
  pxVar1 = _xmlSAXParseDoc((xmlSAXHandlerPtr)0x0,cur,1);
  return pxVar1;
}

