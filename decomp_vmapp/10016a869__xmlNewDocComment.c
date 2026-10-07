
xmlNodePtr _xmlNewDocComment(xmlDocPtr doc,xmlChar *content)

{
  xmlNodePtr pxVar1;
  
  pxVar1 = _xmlNewComment(content);
  if (pxVar1 != (xmlNodePtr)0x0) {
    pxVar1->doc = doc;
  }
  return pxVar1;
}

