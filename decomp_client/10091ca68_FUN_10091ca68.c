
void FUN_10091ca68(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6)

{
  int iVar1;
  xmlChar *add;
  long local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  FUN_10091c158(&local_10,param_1,param_3);
  if (param_6 == 0) {
    iVar1 = FUN_10091c92c(param_1,param_3);
    if (iVar1 == 2) goto LAB_10091cab8;
    local_10 = _xmlStrcat(local_10,(xmlChar *)"The character content is not a valid value of ");
  }
  else {
LAB_10091cab8:
    local_10 = _xmlStrcat(local_10,(xmlChar *)"\'%s\' is not a valid value of ");
  }
  iVar1 = FUN_10091c984(param_5);
  if (iVar1 == 0) {
    local_10 = _xmlStrcat(local_10,(xmlChar *)"the local ");
  }
  else {
    local_10 = _xmlStrcat(local_10,(xmlChar *)"the ");
  }
  if ((*(uint *)(param_5 + 0x58) >> 8 & 1) == 0) {
    if ((*(uint *)(param_5 + 0x58) >> 6 & 1) == 0) {
      if ((*(uint *)(param_5 + 0x58) >> 7 & 1) != 0) {
        local_10 = _xmlStrcat(local_10,(xmlChar *)"union type");
      }
    }
    else {
      local_10 = _xmlStrcat(local_10,(xmlChar *)"list type");
    }
  }
  else {
    local_10 = _xmlStrcat(local_10,(xmlChar *)"atomic type");
  }
  iVar1 = FUN_10091c984(param_5);
  if (iVar1 != 0) {
    local_18 = 0;
    local_10 = _xmlStrcat(local_10,(xmlChar *)" \'");
    if (*(int *)(param_5 + 0xa0) == 0) {
      add = (xmlChar *)
            FUN_10091a69e(&local_18,*(undefined8 *)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0x10))
      ;
      local_10 = _xmlStrcat(local_10,add);
    }
    else {
      local_10 = _xmlStrcat(local_10,(xmlChar *)"xs:");
      local_10 = _xmlStrcat(local_10,*(xmlChar **)(param_5 + 0x10));
    }
    local_10 = _xmlStrcat(local_10,(xmlChar *)"\'");
    if (local_18 != 0) {
      (*(code *)_xmlFree)(local_18);
      local_18 = 0;
    }
  }
  local_10 = _xmlStrcat(local_10,(xmlChar *)".\n");
  if (param_6 == 0) {
    iVar1 = FUN_10091c92c(param_1,param_3);
    if (iVar1 != 2) {
      FUN_10091c105(param_1,param_2,param_3,local_10,0,0);
      goto LAB_10091ccc8;
    }
  }
  FUN_10091c105(param_1,param_2,param_3,local_10,param_4,0);
LAB_10091ccc8:
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

