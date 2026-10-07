
void FUN_1001b6a7c(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_30;
  int local_2c;
  long local_28;
  int local_20;
  undefined4 local_1c;
  xmlChar *local_18;
  int local_10;
  undefined4 local_c;
  
  local_20 = 0;
  local_1c = 0xffffffff;
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if ((*(char *)*param_1 == '.') && (*(char *)(*param_1 + 1) == '.')) {
    *param_1 = *param_1 + 2;
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    FUN_1001a5741(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xb,10,1,0,0,0);
  }
  else if (*(char *)*param_1 == '.') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
  }
  else {
    local_18 = (xmlChar *)0x0;
    local_28 = 0;
    local_10 = 0;
    if ((((int)param_1[8] == 0) ||
        (local_18 = (xmlChar *)_xmlXPathParseNCName(param_1), local_18 == (xmlChar *)0x0)) ||
       (iVar1 = _xmlStrEqual(local_18,(xmlChar *)"range-to"), iVar1 == 0)) {
      if (*(char *)*param_1 == '*') {
        local_10 = 4;
      }
      else {
        if (local_18 == (xmlChar *)0x0) {
          local_18 = (xmlChar *)_xmlXPathParseNCName(param_1);
        }
        if (local_18 == (xmlChar *)0x0) {
          if (*(char *)*param_1 == '@') {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
            local_10 = 3;
          }
          else {
            local_10 = 4;
          }
        }
        else {
          local_10 = FUN_1001b6851(local_18);
          if (local_10 == 0) {
            local_10 = 4;
          }
          else {
            while (((*(char *)*param_1 == ' ' ||
                    ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
                   (*(char *)*param_1 == '\r'))) {
              if (*(char *)*param_1 != '\0') {
                *param_1 = *param_1 + 1;
              }
            }
            if ((*(char *)*param_1 == ':') && (*(char *)(*param_1 + 1) == ':')) {
              *param_1 = *param_1 + 2;
              (*(code *)_xmlFree)(local_18);
              local_18 = (xmlChar *)0x0;
            }
            else {
              local_10 = 4;
            }
          }
        }
      }
      if ((int)param_1[2] != 0) {
        return;
      }
      local_30 = 0;
      local_2c = 0;
      local_18 = (xmlChar *)FUN_1001b62f4(param_1,&local_2c,&local_30,&local_28,local_18);
      if (local_2c == 0) {
        return;
      }
      if ((((local_28 != 0) && (param_1[3] != 0)) && ((*(uint *)(param_1[3] + 0x150) & 1) != 0)) &&
         (lVar2 = _xmlXPathNsLookup(param_1[3],local_28), lVar2 == 0)) {
        _xmlXPathErr(param_1,0x13);
      }
    }
    else {
      local_1c = *(undefined4 *)(param_1[7] + 0x10);
      (*(code *)_xmlFree)(local_18);
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      if (*(char *)*param_1 != '(') {
        _xmlXPathErr(param_1,7);
        return;
      }
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1001b5e24(param_1);
      if ((int)param_1[2] != 0) {
        return;
      }
      while ((*(char *)*param_1 == ' ' ||
             (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))
             )) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      if (*(char *)*param_1 != ')') {
        _xmlXPathErr(param_1,7);
        return;
      }
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      local_20 = 1;
    }
    local_c = *(undefined4 *)(param_1[7] + 0x10);
    *(undefined4 *)(param_1[7] + 0x10) = 0xffffffff;
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while (*(char *)*param_1 == '[') {
      FUN_1001b6088(param_1,0);
    }
    if (local_20 == 0) {
      FUN_1001a5741(param_1[7],local_c,*(undefined4 *)(param_1[7] + 0x10),0xb,local_10,local_2c,
                    local_30,local_28,local_18);
    }
    else {
      FUN_1001a5741(param_1[7],local_1c,local_c,0x13,0,0,0,0,0);
    }
  }
  return;
}

