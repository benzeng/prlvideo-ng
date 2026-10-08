
xmlAttrPtr _xmlCopyPropList(xmlNodePtr target,xmlAttrPtr cur)

{
  xmlAttrPtr pxVar1;
  xmlAttrPtr pxVar2;
  xmlAttrPtr local_38;
  xmlAttrPtr local_20;
  xmlAttrPtr local_18;
  
  local_20 = (xmlAttrPtr)0x0;
  local_18 = (xmlAttrPtr)0x0;
  local_38 = cur;
  while( true ) {
    if (local_38 == (xmlAttrPtr)0x0) {
      return local_20;
    }
    pxVar2 = _xmlCopyProp(target,local_38);
    if (pxVar2 == (xmlAttrPtr)0x0) break;
    pxVar1 = pxVar2;
    if (local_18 != (xmlAttrPtr)0x0) {
      local_18->next = pxVar2;
      pxVar2->prev = local_18;
      pxVar1 = local_20;
    }
    local_20 = pxVar1;
    local_38 = local_38->next;
    local_18 = pxVar2;
  }
  return (xmlAttrPtr)0x0;
}

