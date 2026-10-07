
xmlElementContentPtr _xmlNewElementContent(xmlChar *name,xmlElementContentType type)

{
  xmlElementContentPtr pxVar1;
  
  pxVar1 = _xmlNewDocElementContent((xmlDocPtr)0x0,name,type);
  return pxVar1;
}

