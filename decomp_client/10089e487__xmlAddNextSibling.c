
xmlNodePtr _xmlAddNextSibling(xmlNodePtr cur,xmlNodePtr elem)

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
        _xmlNodeAddContent(cur,elem->content);
        _xmlFreeNode(elem);
        return cur;
      }
      if (((cur->next != (_xmlNode *)0x0) && (cur->next->type == XML_TEXT_NODE)) &&
         (cur->name == cur->next->name)) {
        pxVar1 = _xmlStrdup(elem->content);
        pxVar1 = _xmlStrcat(pxVar1,cur->next->content);
        _xmlNodeSetContent(cur->next,pxVar1);
        (*(code *)_xmlFree)(pxVar1);
        _xmlFreeNode(elem);
        return cur->next;
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
    elem->prev = cur;
    elem->next = cur->next;
    cur->next = elem;
    if (elem->next != (_xmlNode *)0x0) {
      elem->next->prev = elem;
    }
    local_30 = elem;
    if (((elem->parent != (_xmlNode *)0x0) && (elem->parent->last == cur)) &&
       (elem->type != XML_ATTRIBUTE_NODE)) {
      elem->parent->last = elem;
    }
  }
  return local_30;
}

