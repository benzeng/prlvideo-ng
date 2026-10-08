
xmlNodePtr _xmlNewDocNode(xmlDocPtr doc,xmlNsPtr ns,xmlChar *name,xmlChar *content)

{
  xmlChar *name_00;
  xmlNodePtr pxVar1;
  xmlNodePtr local_18;
  _xmlNode *local_10;
  
  if ((doc == (xmlDocPtr)0x0) || (doc->dict == (_xmlDict *)0x0)) {
    local_18 = _xmlNewNode(ns,name);
  }
  else {
    name_00 = _xmlDictLookup(doc->dict,name,-1);
    local_18 = _xmlNewNodeEatName(ns,name_00);
  }
  if ((local_18 != (xmlNodePtr)0x0) && (local_18->doc = doc, content != (xmlChar *)0x0)) {
    pxVar1 = _xmlStringGetNodeList(doc,content);
    local_18->children = pxVar1;
    if (local_18 != (xmlNodePtr)0x0) {
      local_10 = local_18->children;
      if (local_10 == (_xmlNode *)0x0) {
        local_18->last = (_xmlNode *)0x0;
      }
      else {
        for (; local_10->next != (_xmlNode *)0x0; local_10 = local_10->next) {
          local_10->parent = local_18;
        }
        local_10->parent = local_18;
        local_18->last = local_10;
      }
    }
  }
  return local_18;
}

