
xmlNodePtr _xmlNewDocRawNode(xmlDocPtr doc,xmlNsPtr ns,xmlChar *name,xmlChar *content)

{
  xmlNodePtr pxVar1;
  xmlNodePtr pxVar2;
  _xmlNode *local_10;
  
  pxVar1 = _xmlNewDocNode(doc,ns,name,(xmlChar *)0x0);
  if ((pxVar1 != (xmlNodePtr)0x0) && (pxVar1->doc = doc, content != (xmlChar *)0x0)) {
    pxVar2 = _xmlNewDocText(doc,content);
    pxVar1->children = pxVar2;
    if (pxVar1 != (xmlNodePtr)0x0) {
      local_10 = pxVar1->children;
      if (local_10 == (_xmlNode *)0x0) {
        pxVar1->last = (_xmlNode *)0x0;
      }
      else {
        for (; local_10->next != (_xmlNode *)0x0; local_10 = local_10->next) {
          local_10->parent = pxVar1;
        }
        local_10->parent = pxVar1;
        pxVar1->last = local_10;
      }
    }
  }
  return pxVar1;
}

