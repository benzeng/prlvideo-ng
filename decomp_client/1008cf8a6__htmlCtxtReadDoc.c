
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlDocPtr _htmlCtxtReadDoc(xmlParserCtxtPtr ctxt,xmlChar *cur,char *URL,char *encoding,int options)

{
  long lVar1;
  undefined8 local_48;
  
  if (cur == (xmlChar *)0x0) {
    local_48 = (htmlDocPtr)0x0;
  }
  else if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_48 = (htmlDocPtr)0x0;
  }
  else {
    _htmlCtxtReset(ctxt);
    lVar1 = _xmlNewStringInputStream(ctxt,cur);
    if (lVar1 == 0) {
      local_48 = (htmlDocPtr)0x0;
    }
    else {
      _inputPush(ctxt,lVar1);
      local_48 = (htmlDocPtr)FUN_1008cf47d(ctxt,URL,encoding,options,1);
    }
  }
  return local_48;
}

