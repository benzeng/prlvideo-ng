
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr _xmlCreateURLParserCtxt(char *param_1,int param_2)

{
  xmlParserInputPtr pxVar1;
  xmlParserCtxtPtr local_40;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_40 = _xmlNewParserCtxt();
  if (local_40 == (xmlParserCtxtPtr)0x0) {
    _xmlErrMemory(0,"cannot allocate parser context");
    local_40 = (xmlParserCtxtPtr)0x0;
  }
  else {
    if (param_2 != 0) {
      _xmlCtxtUseOptions(local_40,param_2);
    }
    local_40->linenumbers = 1;
    pxVar1 = _xmlLoadExternalEntity(param_1,(char *)0x0,local_40);
    if (pxVar1 == (xmlParserInputPtr)0x0) {
      _xmlFreeParserCtxt(local_40);
      local_40 = (xmlParserCtxtPtr)0x0;
    }
    else {
      _inputPush(local_40,pxVar1);
      if (local_40->directory == (char *)0x0) {
        local_10 = _xmlParserGetDirectory(param_1);
      }
      if ((local_40->directory == (char *)0x0) && (local_10 != (char *)0x0)) {
        local_40->directory = local_10;
      }
    }
  }
  return local_40;
}

