
xmlNodePtr _xmlAddChildList(xmlNodePtr parent,xmlNodePtr cur)

{
  _xmlNode *p_Var1;
  xmlNodePtr local_30;
  xmlNodePtr local_28;
  
  if (parent == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else if (cur == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    local_28 = cur;
    if (parent->children == (_xmlNode *)0x0) {
      parent->children = cur;
    }
    else {
      if (((cur->type == XML_TEXT_NODE) && (parent->last->type == XML_TEXT_NODE)) &&
         (cur->name == parent->last->name)) {
        _xmlNodeAddContent(parent->last,cur->content);
        if (cur->next == (_xmlNode *)0x0) {
          _xmlFreeNode(cur);
          return parent->last;
        }
        local_28 = cur->next;
        _xmlFreeNode(cur);
      }
      p_Var1 = parent->last;
      p_Var1->next = local_28;
      local_28->prev = p_Var1;
    }
    for (; local_28->next != (_xmlNode *)0x0; local_28 = local_28->next) {
      local_28->parent = parent;
      if (local_28->doc != parent->doc) {
        _xmlSetTreeDoc(local_28,parent->doc);
      }
    }
    local_28->parent = parent;
    local_28->doc = parent->doc;
    parent->last = local_28;
    local_30 = local_28;
  }
  return local_30;
}

