
undefined8 *
FUN_100902893(int param_1,xmlChar *param_2,xmlChar *param_3,xmlChar *param_4,undefined4 param_5,
             undefined8 param_6)

{
  xmlChar *pxVar1;
  undefined8 *local_58;
  xmlChar *local_50;
  xmlChar *local_38;
  xmlChar *local_28;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  local_58 = (undefined8 *)(*(code *)_xmlMalloc)(0x50);
  if (local_58 == (undefined8 *)0x0) {
    FUN_10090273c("allocating catalog entry");
    local_58 = (undefined8 *)0x0;
  }
  else {
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    *(int *)(local_58 + 3) = param_1;
    local_28 = param_2;
    if (((param_1 == 5) || (param_1 == 8)) &&
       (local_10 = (xmlChar *)FUN_100903f86(param_2), local_10 != (xmlChar *)0x0)) {
      local_50 = local_10;
      if (*local_10 == '\0') {
        local_50 = (xmlChar *)0x0;
      }
      local_28 = local_50;
    }
    if (local_28 == (xmlChar *)0x0) {
      local_58[4] = 0;
    }
    else {
      pxVar1 = _xmlStrdup(local_28);
      local_58[4] = pxVar1;
    }
    if (local_10 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_10);
    }
    if (param_3 == (xmlChar *)0x0) {
      local_58[5] = 0;
    }
    else {
      pxVar1 = _xmlStrdup(param_3);
      local_58[5] = pxVar1;
    }
    local_38 = param_4;
    if (param_4 == (xmlChar *)0x0) {
      local_38 = param_3;
    }
    if (local_38 == (xmlChar *)0x0) {
      local_58[6] = 0;
    }
    else {
      pxVar1 = _xmlStrdup(local_38);
      local_58[6] = pxVar1;
    }
    *(undefined4 *)(local_58 + 7) = param_5;
    *(undefined4 *)((long)local_58 + 0x3c) = 0;
    *(undefined4 *)(local_58 + 8) = 0;
    local_58[9] = param_6;
  }
  return local_58;
}

