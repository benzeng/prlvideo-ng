
xmlNodePtr _xmlAddChild(xmlNodePtr parent,xmlNodePtr cur)

{
  _xmlNode *p_Var1;
  xmlNodePtr local_30;
  xmlNodePtr local_10;
  
  if (parent == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else if (cur == (xmlNodePtr)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    if (cur->type == XML_TEXT_NODE) {
      if ((((parent->type == XML_TEXT_NODE) && (parent->content != (xmlChar *)0x0)) &&
          (parent->name == cur->name)) && (parent != cur)) {
        _xmlNodeAddContent(parent,cur->content);
        _xmlFreeNode(cur);
        return parent;
      }
      if (((parent->last != (_xmlNode *)0x0) && (parent->last->type == XML_TEXT_NODE)) &&
         ((parent->last->name == cur->name && (parent->last != cur)))) {
        _xmlNodeAddContent(parent->last,cur->content);
        _xmlFreeNode(cur);
        return parent->last;
      }
    }
    p_Var1 = cur->parent;
    cur->parent = parent;
    if (cur->doc != parent->doc) {
      _xmlSetTreeDoc(cur,parent->doc);
    }
    local_30 = cur;
    if (p_Var1 != parent) {
      if (((parent->type == XML_TEXT_NODE) && (parent->content != (xmlChar *)0x0)) &&
         (parent != cur)) {
        _xmlNodeAddContent(parent,cur->content);
        _xmlFreeNode(cur);
        local_30 = parent;
      }
      else if (cur->type == XML_ATTRIBUTE_NODE) {
        if (parent->properties == (_xmlAttr *)0x0) {
          parent->properties = (_xmlAttr *)cur;
        }
        else {
          if (cur->ns == (xmlNs *)0x0) {
            local_10 = (xmlNodePtr)_xmlHasProp(parent,cur->name);
          }
          else {
            local_10 = (xmlNodePtr)_xmlHasNsProp(parent,cur->name,cur->ns->href);
          }
          if ((local_10 != (xmlNodePtr)0x0) && (local_10 != cur)) {
            _xmlFreeProp((xmlAttrPtr)local_10);
          }
          for (local_10 = (xmlNodePtr)parent->properties; local_10->next != (_xmlNode *)0x0;
              local_10 = local_10->next) {
          }
          local_10->next = cur;
          cur->prev = local_10;
        }
      }
      else if (parent->children == (_xmlNode *)0x0) {
        parent->children = cur;
        parent->last = cur;
      }
      else {
        p_Var1 = parent->last;
        p_Var1->next = cur;
        cur->prev = p_Var1;
        parent->last = cur;
      }
    }
  }
  return local_30;
}

