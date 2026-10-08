
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int FUN_1009465fe(long param_1)

{
  int iVar1;
  int local_24;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_100946446(param_1);
  if (iVar1 < 0) {
    local_24 = -1;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
          FUN_10091c652(param_1,"xmlSchemaVStart","no instance to validate");
          local_c = -1;
        }
        else {
          local_c = _xmlParseDocument(*(xmlParserCtxtPtr *)(param_1 + 0x50));
        }
      }
    }
    else {
      local_c = FUN_100945fd1(param_1);
    }
    FUN_1009465b3(param_1);
    if (local_c == 0) {
      local_c = *(int *)(param_1 + 0x60);
    }
    local_24 = local_c;
  }
  return local_24;
}

