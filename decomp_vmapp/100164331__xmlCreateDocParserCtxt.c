
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr _xmlCreateDocParserCtxt(xmlChar *cur)

{
  int iVar1;
  undefined8 local_28;
  
  if (cur == (xmlChar *)0x0) {
    local_28 = (xmlParserCtxtPtr)0x0;
  }
  else {
    iVar1 = _xmlStrlen(cur);
    local_28 = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(cur,iVar1);
  }
  return local_28;
}

