
void FUN_10091e207(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  long param_5,xmlChar *param_6,undefined8 param_7,xmlChar *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  xmlChar *add;
  long local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  FUN_10091c158(&local_10,param_1,param_4);
  if (param_8 == (xmlChar *)0x0) {
    if (param_5 == 0) {
      if (*(int *)(param_4 + 8) == 2) {
        local_10 = _xmlStrcat(local_10,(xmlChar *)"The value \'%s\' is not valid.");
      }
      else {
        local_10 = _xmlStrcat(local_10,(xmlChar *)"The character content is not valid.");
      }
    }
    else {
      if (*(int *)(param_4 + 8) == 2) {
        local_10 = _xmlStrcat(local_10,(xmlChar *)"\'%s\' is not a valid value of ");
      }
      else {
        local_10 = _xmlStrcat(local_10,(xmlChar *)"The character content is not a valid value of ");
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
                FUN_10091a69e(&local_18,*(undefined8 *)(param_5 + 0xd0),
                              *(undefined8 *)(param_5 + 0x10));
          local_10 = _xmlStrcat(local_10,add);
        }
        else {
          local_10 = _xmlStrcat(local_10,(xmlChar *)"xs:");
          local_10 = _xmlStrcat(local_10,*(xmlChar **)(param_5 + 0x10));
        }
        local_10 = _xmlStrcat(local_10,(xmlChar *)"\'.");
        if (local_18 != 0) {
          (*(code *)_xmlFree)(local_18);
          local_18 = 0;
        }
      }
    }
    if (param_6 == (xmlChar *)0x0) {
      local_10 = _xmlStrcat(local_10,(xmlChar *)"\n");
    }
    else {
      local_10 = _xmlStrcat(local_10,(xmlChar *)" Expected is \'");
      local_10 = _xmlStrcat(local_10,param_6);
      local_10 = _xmlStrcat(local_10,(xmlChar *)"\'.\n");
    }
    if (*(int *)(param_4 + 8) == 2) {
      FUN_10091b9cb(param_1,param_4,param_2,local_10,param_7,0);
    }
    else {
      FUN_10091b9cb(param_1,param_4,param_2,local_10,0,0);
    }
  }
  else {
    local_10 = _xmlStrcat(local_10,param_8);
    local_10 = _xmlStrcat(local_10,(xmlChar *)".\n");
    FUN_10091bb4c(param_1,param_4,param_2,0,0,0,local_10,param_9,param_10,0,0,0);
  }
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

