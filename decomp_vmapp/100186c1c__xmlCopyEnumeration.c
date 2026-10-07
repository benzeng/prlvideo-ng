
xmlEnumerationPtr _xmlCopyEnumeration(xmlEnumerationPtr cur)

{
  xmlEnumerationPtr pxVar1;
  xmlEnumerationPtr local_28;
  
  if (cur == (xmlEnumerationPtr)0x0) {
    local_28 = (xmlEnumerationPtr)0x0;
  }
  else {
    local_28 = _xmlCreateEnumeration(cur->name);
    if (cur->next == (_xmlEnumeration *)0x0) {
      local_28->next = (_xmlEnumeration *)0x0;
    }
    else {
      pxVar1 = _xmlCopyEnumeration(cur->next);
      local_28->next = pxVar1;
    }
  }
  return local_28;
}

