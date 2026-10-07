
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlCtxtReadDoc(xmlParserCtxtPtr ctxt,xmlChar *cur,char *URL,char *encoding,int options)

{
  long lVar1;
  undefined8 local_48;
  
  if (cur == (xmlChar *)0x0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_48 = (xmlDocPtr)0x0;
  }
  else {
    _xmlCtxtReset(ctxt);
    lVar1 = _xmlNewStringInputStream(ctxt,cur);
    if (lVar1 == 0) {
      local_48 = (xmlDocPtr)0x0;
    }
    else {
      _inputPush(ctxt,lVar1);
      local_48 = (xmlDocPtr)FUN_1001650f8(ctxt,URL,encoding,options,1);
    }
  }
  return local_48;
}

