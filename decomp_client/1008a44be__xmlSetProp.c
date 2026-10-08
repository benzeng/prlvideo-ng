
xmlAttrPtr _xmlSetProp(xmlNodePtr node,xmlChar *name,xmlChar *value)

{
  int iVar1;
  xmlAttrPtr pxVar2;
  xmlNodePtr pxVar3;
  xmlAttrPtr local_78;
  int local_54;
  _xmlNode *local_50;
  _xmlDoc *local_48;
  xmlChar *local_40;
  xmlNsPtr local_38;
  xmlChar *local_30;
  _xmlNode *local_28;
  int local_1c;
  xmlChar *local_18;
  _xmlNode *local_10;
  
  if (((node == (xmlNodePtr)0x0) || (name == (xmlChar *)0x0)) || (node->type != XML_ELEMENT_NODE)) {
    local_78 = (xmlAttrPtr)0x0;
  }
  else {
    local_40 = _xmlSplitQName3(name,&local_54);
    if (local_40 != (xmlChar *)0x0) {
      local_30 = _xmlStrndup(name,local_54);
      local_38 = _xmlSearchNs(node->doc,node,local_30);
      if (local_30 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_30);
      }
      if (local_38 != (xmlNsPtr)0x0) {
        pxVar2 = _xmlSetNsProp(node,local_38,local_40,value);
        return pxVar2;
      }
    }
    local_48 = node->doc;
    for (local_50 = (_xmlNode *)node->properties; local_50 != (_xmlNode *)0x0;
        local_50 = local_50->next) {
      iVar1 = _xmlStrEqual(local_50->name,name);
      if ((iVar1 != 0) && (local_50->ns == (xmlNs *)0x0)) {
        local_28 = local_50->children;
        local_1c = _xmlIsID(node->doc,node,(xmlAttrPtr)local_50);
        if (local_1c == 1) {
          _xmlRemoveID(node->doc,(xmlAttrPtr)local_50);
        }
        local_50->children = (_xmlNode *)0x0;
        local_50->last = (_xmlNode *)0x0;
        if (value != (xmlChar *)0x0) {
          local_18 = _xmlEncodeEntitiesReentrant(node->doc,value);
          pxVar3 = _xmlStringGetNodeList(node->doc,local_18);
          local_50->children = pxVar3;
          local_50->last = (_xmlNode *)0x0;
          local_50->doc = local_48;
          for (local_10 = local_50->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next
              ) {
            local_10->parent = local_50;
            local_10->doc = local_48;
            if (local_10->next == (_xmlNode *)0x0) {
              local_50->last = local_10;
            }
          }
          (*(code *)_xmlFree)(local_18);
        }
        if (local_28 != (xmlNodePtr)0x0) {
          _xmlFreeNodeList(local_28);
        }
        if (local_1c != 0) {
          _xmlAddID((xmlValidCtxtPtr)0x0,node->doc,value,(xmlAttrPtr)local_50);
        }
        return (xmlAttrPtr)local_50;
      }
    }
    local_78 = _xmlNewProp(node,name,value);
  }
  return local_78;
}

