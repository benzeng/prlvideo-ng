
int _xmlRemoveProp(xmlAttrPtr cur)

{
  int local_24;
  xmlAttrPtr local_10;
  
  if (cur == (xmlAttrPtr)0x0) {
    local_24 = -1;
  }
  else if (cur->parent == (_xmlNode *)0x0) {
    local_24 = -1;
  }
  else {
    local_10 = cur->parent->properties;
    if (local_10 == cur) {
      cur->parent->properties = cur->next;
      _xmlFreeProp(cur);
      local_24 = 0;
    }
    else {
      for (; local_10 != (xmlAttrPtr)0x0; local_10 = local_10->next) {
        if (local_10->next == cur) {
          local_10->next = cur->next;
          if (local_10->next != (_xmlAttr *)0x0) {
            local_10->next->prev = local_10;
          }
          _xmlFreeProp(cur);
          return 0;
        }
      }
      local_24 = -1;
    }
  }
  return local_24;
}

