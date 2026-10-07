
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlReadDoc(xmlChar *cur,char *URL,char *encoding,int options)

{
  xmlParserCtxtPtr pxVar1;
  undefined8 local_40;
  
  if (cur == (xmlChar *)0x0) {
    local_40 = (xmlDocPtr)0x0;
  }
  else {
    pxVar1 = _xmlCreateDocParserCtxt(cur);
    if (pxVar1 == (xmlParserCtxtPtr)0x0) {
      local_40 = (xmlDocPtr)0x0;
    }
    else {
      local_40 = (xmlDocPtr)FUN_1001650f8(pxVar1,URL,encoding,options,0);
    }
  }
  return local_40;
}

