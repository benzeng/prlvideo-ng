
xmlNodePtr _xmlAddSibling(xmlNodePtr cur,xmlNodePtr elem)

{
  _xmlNode *p_Var1;
  xmlNodePtr local_30;
  xmlNodePtr local_20;
  
  if (cur == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else if (elem == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    local_20 = cur;
    if ((((cur->parent == (_xmlNode *)0x0) || (cur->parent->children == (_xmlNode *)0x0)) ||
        (cur->parent->last == (_xmlNode *)0x0)) || (cur->parent->last->next != (_xmlNode *)0x0)) {
      for (; local_20->next != (_xmlNode *)0x0; local_20 = local_20->next) {
      }
    }
    else {
      local_20 = cur->parent->last;
    }
    _xmlUnlinkNode(elem);
    if (((local_20->type == XML_TEXT_NODE) && (elem->type == XML_TEXT_NODE)) &&
       (local_20->name == elem->name)) {
      _xmlNodeAddContent(local_20,elem->content);
      _xmlFreeNode(elem);
      local_30 = local_20;
    }
    else {
      if (elem->doc != local_20->doc) {
        _xmlSetTreeDoc(elem,local_20->doc);
      }
      p_Var1 = local_20->parent;
      elem->prev = local_20;
      elem->next = (_xmlNode *)0x0;
      elem->parent = p_Var1;
      local_20->next = elem;
      local_30 = elem;
      if (p_Var1 != (_xmlNode *)0x0) {
        p_Var1->last = elem;
      }
    }
  }
  return local_30;
}

