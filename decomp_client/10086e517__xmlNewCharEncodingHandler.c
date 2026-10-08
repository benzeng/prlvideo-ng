
xmlCharEncodingHandlerPtr
_xmlNewCharEncodingHandler
          (char *name,xmlCharEncodingInputFunc input,xmlCharEncodingOutputFunc output)

{
  int iVar1;
  char cVar2;
  xmlCharEncodingHandlerPtr local_258;
  char *local_240;
  char local_238 [512];
  xmlCharEncodingHandlerPtr local_38;
  char *local_30;
  int local_24;
  char *local_20;
  
  local_20 = (char *)0x0;
  local_30 = _xmlGetEncodingAlias(name);
  local_240 = name;
  if (local_30 != (char *)0x0) {
    local_240 = local_30;
  }
  if (local_240 == (char *)0x0) {
    FUN_10086bdce(6000,"xmlNewCharEncodingHandler : no name !\n",0);
    local_258 = (xmlCharEncodingHandlerPtr)0x0;
  }
  else {
    for (local_24 = 0; iVar1 = local_24, local_24 < 499; local_24 = local_24 + 1) {
      cVar2 = FUN_10086daa9((int)local_240[local_24]);
      local_238[iVar1] = cVar2;
      if (local_238[local_24] == '\0') break;
    }
    local_238[local_24] = '\0';
    local_20 = (char *)(*(code *)_xmlMemStrdup)(local_238);
    if (local_20 == (char *)0x0) {
      FUN_10086bda0("xmlNewCharEncodingHandler : out of memory !\n");
      local_258 = (xmlCharEncodingHandlerPtr)0x0;
    }
    else {
      local_38 = (xmlCharEncodingHandlerPtr)(*(code *)_xmlMalloc)(0x18);
      if (local_38 == (xmlCharEncodingHandlerPtr)0x0) {
        (*(code *)_xmlFree)(local_20);
        FUN_10086bda0("xmlNewCharEncodingHandler : out of memory !\n");
        local_258 = (xmlCharEncodingHandlerPtr)0x0;
      }
      else {
        local_38->input = input;
        local_38->output = output;
        local_38->name = local_20;
        _xmlRegisterCharEncodingHandler(local_38);
        local_258 = local_38;
      }
    }
  }
  return local_258;
}

