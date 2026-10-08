
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlParserCtxtPtr FUN_1008cc381(void)

{
  int iVar1;
  htmlParserCtxtPtr local_20;
  
  local_20 = (htmlParserCtxtPtr)(*(code *)_xmlMalloc)(0x2b8);
  if (local_20 == (htmlParserCtxtPtr)0x0) {
    FUN_1008c3d3c(0,"NewParserCtxt: out of memory\n");
    local_20 = (htmlParserCtxtPtr)0x0;
  }
  else {
    _memset(local_20,0,0x2b8);
    iVar1 = FUN_1008cbf2c(local_20);
    if (iVar1 < 0) {
      _htmlFreeParserCtxt(local_20);
      local_20 = (htmlParserCtxtPtr)0x0;
    }
  }
  return local_20;
}

