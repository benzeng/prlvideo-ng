
void _xmlUnlinkNode(xmlNodePtr cur)

{
  _xmlDoc *p_Var1;
  xmlNodePtr elem;
  int iVar2;
  
  if (cur != (xmlNodePtr)0x0) {
    if ((cur->type == XML_DTD_NODE) && (p_Var1 = cur->doc, p_Var1 != (_xmlDoc *)0x0)) {
      if (p_Var1->intSubset == (_xmlDtd *)cur) {
        p_Var1->intSubset = (_xmlDtd *)0x0;
      }
      if (p_Var1->extSubset == (_xmlDtd *)cur) {
        p_Var1->extSubset = (_xmlDtd *)0x0;
      }
    }
    if (cur->parent != (_xmlNode *)0x0) {
      elem = cur->parent;
      if (cur->type == XML_ATTRIBUTE_NODE) {
        if (*(int *)&cur->content == 2) {
          iVar2 = _xmlIsID(elem->doc,elem,(xmlAttrPtr)cur);
          if (iVar2 != 0) {
            _xmlRemoveID(cur->doc,(xmlAttrPtr)cur);
          }
        }
        if ((xmlNodePtr)elem->properties == cur) {
          elem->properties = (_xmlAttr *)cur->next;
        }
      }
      else {
        if (elem->children == cur) {
          elem->children = cur->next;
        }
        if (elem->last == cur) {
          elem->last = cur->prev;
        }
      }
      cur->parent = (_xmlNode *)0x0;
    }
    if (cur->next != (_xmlNode *)0x0) {
      cur->next->prev = cur->prev;
    }
    if (cur->prev != (_xmlNode *)0x0) {
      cur->prev->next = cur->next;
    }
    cur->prev = (_xmlNode *)0x0;
    cur->next = cur->prev;
  }
  return;
}

