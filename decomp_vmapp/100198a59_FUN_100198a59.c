
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlParserCtxtPtr FUN_100198a59(void)

{
  int iVar1;
  htmlParserCtxtPtr local_20;
  
  local_20 = (htmlParserCtxtPtr)(*(code *)_xmlMalloc)(0x2b8);
  if (local_20 == (htmlParserCtxtPtr)0x0) {
    FUN_100190414(0,"NewParserCtxt: out of memory\n");
    local_20 = (htmlParserCtxtPtr)0x0;
  }
  else {
    _memset(local_20,0,0x2b8);
    iVar1 = FUN_100198604(local_20);
    if (iVar1 < 0) {
      _htmlFreeParserCtxt(local_20);
      local_20 = (htmlParserCtxtPtr)0x0;
    }
  }
  return local_20;
}

