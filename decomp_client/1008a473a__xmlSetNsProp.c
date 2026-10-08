
xmlAttrPtr _xmlSetNsProp(xmlNodePtr node,xmlNsPtr ns,xmlChar *name,xmlChar *value)

{
  int iVar1;
  xmlChar *value_00;
  xmlNodePtr pxVar2;
  xmlAttrPtr local_50;
  _xmlNode *local_28;
  _xmlNode *local_10;
  
  if (((node == (xmlNodePtr)0x0) || (name == (xmlChar *)0x0)) || (node->type != XML_ELEMENT_NODE)) {
    local_50 = (xmlAttrPtr)0x0;
  }
  else if (ns == (xmlNsPtr)0x0) {
    local_50 = _xmlSetProp(node,name,value);
  }
  else if (ns->href == (xmlChar *)0x0) {
    local_50 = (xmlAttrPtr)0x0;
  }
  else {
    for (local_28 = (_xmlNode *)node->properties; local_28 != (_xmlNode *)0x0;
        local_28 = local_28->next) {
      iVar1 = _xmlStrEqual(local_28->name,name);
      if (((iVar1 != 0) && (local_28->ns != (xmlNs *)0x0)) &&
         (iVar1 = _xmlStrEqual(local_28->ns->href,ns->href), iVar1 != 0)) {
        iVar1 = _xmlIsID(node->doc,node,(xmlAttrPtr)local_28);
        if (iVar1 == 1) {
          _xmlRemoveID(node->doc,(xmlAttrPtr)local_28);
        }
        if (local_28->children != (_xmlNode *)0x0) {
          _xmlFreeNodeList(local_28->children);
        }
        local_28->children = (_xmlNode *)0x0;
        local_28->last = (_xmlNode *)0x0;
        local_28->ns = ns;
        if (value != (xmlChar *)0x0) {
          value_00 = _xmlEncodeEntitiesReentrant(node->doc,value);
          pxVar2 = _xmlStringGetNodeList(node->doc,value_00);
          local_28->children = pxVar2;
          local_28->last = (_xmlNode *)0x0;
          for (local_10 = local_28->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next
              ) {
            local_10->parent = local_28;
            if (local_10->next == (_xmlNode *)0x0) {
              local_28->last = local_10;
            }
          }
          (*(code *)_xmlFree)(value_00);
        }
        if (iVar1 != 0) {
          _xmlAddID((xmlValidCtxtPtr)0x0,node->doc,value,(xmlAttrPtr)local_28);
        }
        return (xmlAttrPtr)local_28;
      }
    }
    local_50 = _xmlNewNsProp(node,ns,name,value);
  }
  return local_50;
}

