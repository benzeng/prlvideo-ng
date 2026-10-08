
xmlNodePtr _xmlReplaceNode(xmlNodePtr old,xmlNodePtr cur)

{
  int iVar1;
  xmlNodePtr local_20;
  
  if (old == cur) {
    local_20 = (xmlNodePtr)0x0;
  }
  else if ((old == (xmlNodePtr)0x0) || (old->parent == (_xmlNode *)0x0)) {
    local_20 = (xmlNodePtr)0x0;
  }
  else {
    local_20 = old;
    if (cur == (xmlNodePtr)0x0) {
      _xmlUnlinkNode(old);
    }
    else if (((cur != old) &&
             ((old->type != XML_ATTRIBUTE_NODE || (cur->type == XML_ATTRIBUTE_NODE)))) &&
            ((cur->type != XML_ATTRIBUTE_NODE || (old->type == XML_ATTRIBUTE_NODE)))) {
      _xmlUnlinkNode(cur);
      _xmlSetTreeDoc(cur,old->doc);
      cur->parent = old->parent;
      cur->next = old->next;
      if (cur->next != (_xmlNode *)0x0) {
        cur->next->prev = cur;
      }
      cur->prev = old->prev;
      if (cur->prev != (_xmlNode *)0x0) {
        cur->prev->next = cur;
      }
      if (cur->parent != (_xmlNode *)0x0) {
        if (cur->type == XML_ATTRIBUTE_NODE) {
          if ((xmlNodePtr)cur->parent->properties == old) {
            cur->parent->properties = (_xmlAttr *)cur;
          }
          if ((*(int *)&old->content == 2) &&
             (iVar1 = _xmlIsID(old->doc,old->parent,(xmlAttrPtr)old), iVar1 != 0)) {
            _xmlRemoveID(old->doc,(xmlAttrPtr)old);
          }
        }
        else {
          if (cur->parent->children == old) {
            cur->parent->children = cur;
          }
          if (cur->parent->last == old) {
            cur->parent->last = cur;
          }
        }
      }
      old->prev = (_xmlNode *)0x0;
      old->next = old->prev;
      old->parent = (_xmlNode *)0x0;
    }
  }
  return local_20;
}

