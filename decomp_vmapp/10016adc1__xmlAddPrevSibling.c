
xmlNodePtr _xmlAddPrevSibling(xmlNodePtr cur,xmlNodePtr elem)

{
  xmlChar *pxVar1;
  xmlNodePtr local_30;
  xmlNodePtr local_10;
  
  if (cur == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else if (elem == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    _xmlUnlinkNode(elem);
    if (elem->type == XML_TEXT_NODE) {
      if (cur->type == XML_TEXT_NODE) {
        pxVar1 = _xmlStrdup(elem->content);
        pxVar1 = _xmlStrcat(pxVar1,cur->content);
        _xmlNodeSetContent(cur,pxVar1);
        (*(code *)_xmlFree)(pxVar1);
        _xmlFreeNode(elem);
        return cur;
      }
      if (((cur->prev != (_xmlNode *)0x0) && (cur->prev->type == XML_TEXT_NODE)) &&
         (cur->name == cur->prev->name)) {
        _xmlNodeAddContent(cur->prev,elem->content);
        _xmlFreeNode(elem);
        return cur->prev;
      }
    }
    else if (elem->type == XML_ATTRIBUTE_NODE) {
      if (elem->ns == (xmlNs *)0x0) {
        local_10 = (xmlNodePtr)_xmlHasProp(cur->parent,elem->name);
      }
      else {
        local_10 = (xmlNodePtr)_xmlHasNsProp(cur->parent,elem->name,elem->ns->href);
      }
      if ((local_10 != (xmlNodePtr)0x0) && (local_10 != elem)) {
        _xmlFreeProp((xmlAttrPtr)local_10);
      }
    }
    if (elem->doc != cur->doc) {
      _xmlSetTreeDoc(elem,cur->doc);
    }
    elem->parent = cur->parent;
    elem->next = cur;
    elem->prev = cur->prev;
    cur->prev = elem;
    if (elem->prev != (_xmlNode *)0x0) {
      elem->prev->next = elem;
    }
    local_30 = elem;
    if (elem->parent != (_xmlNode *)0x0) {
      if (elem->type == XML_ATTRIBUTE_NODE) {
        if ((xmlNodePtr)elem->parent->properties == cur) {
          elem->parent->properties = (_xmlAttr *)elem;
        }
      }
      else if (elem->parent->children == cur) {
        elem->parent->children = elem;
      }
    }
  }
  return local_30;
}

