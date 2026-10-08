
xmlNodePtr _xmlNewDocTextLen(xmlDocPtr doc,xmlChar *content,int len)

{
  xmlNodePtr pxVar1;
  
  pxVar1 = _xmlNewTextLen(content,len);
  if (pxVar1 != (xmlNodePtr)0x0) {
    pxVar1->doc = doc;
  }
  return pxVar1;
}

