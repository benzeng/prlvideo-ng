
xmlEnumerationPtr _xmlCreateEnumeration(xmlChar *name)

{
  xmlChar *pxVar1;
  xmlEnumerationPtr local_28;
  
  local_28 = (xmlEnumerationPtr)(*(code *)_xmlMalloc)(0x10);
  if (local_28 == (xmlEnumerationPtr)0x0) {
    FUN_1008b7324(0,"malloc failed");
    local_28 = (xmlEnumerationPtr)0x0;
  }
  else {
    local_28->next = (_xmlEnumeration *)0x0;
    local_28->name = (xmlChar *)0x0;
    if (name != (xmlChar *)0x0) {
      pxVar1 = _xmlStrdup(name);
      local_28->name = pxVar1;
    }
  }
  return local_28;
}

