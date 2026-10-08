
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserCtxtPtr _xmlNewParserCtxt(void)

{
  int iVar1;
  xmlParserCtxtPtr local_20;
  
  local_20 = (xmlParserCtxtPtr)(*(code *)_xmlMalloc)(0x2b8);
  if (local_20 == (xmlParserCtxtPtr)0x0) {
    _xmlErrMemory(0,"cannot allocate parser context\n");
    local_20 = (xmlParserCtxtPtr)0x0;
  }
  else {
    _memset(local_20,0,0x2b8);
    iVar1 = _xmlInitParserCtxt(local_20);
    if (iVar1 < 0) {
      _xmlFreeParserCtxt(local_20);
      local_20 = (xmlParserCtxtPtr)0x0;
    }
  }
  return local_20;
}

