
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDocPtr _xmlCtxtReadFile(xmlParserCtxtPtr ctxt,char *filename,char *encoding,int options)

{
  xmlParserInputPtr pxVar1;
  undefined8 local_40;
  
  if (filename == (char *)0x0) {
    local_40 = (xmlDocPtr)0x0;
  }
  else if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_40 = (xmlDocPtr)0x0;
  }
  else {
    _xmlCtxtReset(ctxt);
    pxVar1 = _xmlLoadExternalEntity(filename,(char *)0x0,ctxt);
    if (pxVar1 == (xmlParserInputPtr)0x0) {
      local_40 = (xmlDocPtr)0x0;
    }
    else {
      _inputPush(ctxt,pxVar1);
      local_40 = (xmlDocPtr)FUN_100898a20(ctxt,0,encoding,options,1);
    }
  }
  return local_40;
}

