
xmlNodePtr _xmlNewPI(xmlChar *name,xmlChar *content)

{
  xmlNodePtr pxVar1;
  
  pxVar1 = _xmlNewDocPI((xmlDocPtr)0x0,name,content);
  return pxVar1;
}

