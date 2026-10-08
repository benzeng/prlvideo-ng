
int FUN_10094b4fa(undefined8 param_1,xmlChar *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int local_4c;
  byte *local_20;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  if (param_2 == (xmlChar *)0x0) {
    local_4c = -1;
  }
  else {
    pbVar2 = _xmlStrdup(param_2);
    if (pbVar2 == (byte *)0x0) {
      local_4c = -1;
    }
    else {
      local_20 = pbVar2;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
      }
      for (; (*local_20 == 0x20 || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))));
          local_20 = local_20 + 1) {
        *local_20 = 0;
      }
LAB_10094b673:
      pbVar1 = local_20;
      if (*local_20 != 0) {
        if (((*local_20 == 0x20) || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd)) {
          *local_20 = 0;
          while (((local_20 = local_20 + 1, *local_20 == 0x20 ||
                  ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd))) {
            *local_20 = 0;
          }
        }
        else {
          local_10 = local_10 + 1;
          do {
            local_20 = local_20 + 1;
            if (((*local_20 == 0) || (*local_20 == 0x20)) || ((8 < *local_20 && (*local_20 < 0xb))))
            break;
          } while (*local_20 != 0xd);
        }
        goto LAB_10094b673;
      }
      local_20 = pbVar2;
      if (local_10 == 0) {
        (*(code *)_xmlFree)(pbVar2);
        local_4c = local_10;
      }
      else {
        for (; (*local_20 == 0 && (local_20 != pbVar1)); local_20 = local_20 + 1) {
        }
        while ((local_20 != pbVar1 &&
               (local_c = _xmlSchemaValPredefTypeNode(param_1,local_20,0,param_4), local_c == 0))) {
          for (; *local_20 != 0; local_20 = local_20 + 1) {
          }
          for (; (*local_20 == 0 && (local_20 != pbVar1)); local_20 = local_20 + 1) {
          }
        }
        (*(code *)_xmlFree)(pbVar2);
        if (local_c == 0) {
          local_4c = local_10;
        }
        else {
          local_4c = -1;
        }
      }
    }
  }
  return local_4c;
}

