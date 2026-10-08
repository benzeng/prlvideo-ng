
xmlNodePtr _xmlNewDocText(xmlDocPtr doc,xmlChar *content)

{
  xmlNodePtr pxVar1;
  
  pxVar1 = _xmlNewText(content);
  if (pxVar1 != (xmlNodePtr)0x0) {
    pxVar1->doc = doc;
  }
  return pxVar1;
}

