
void FUN_1001e9522(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  xmlChar *param_5,int param_6,int param_7,long param_8)

{
  xmlChar *local_40;
  xmlChar *local_38;
  xmlChar *local_30;
  xmlChar *local_28;
  xmlChar *local_20;
  xmlChar *local_18;
  int local_10;
  undefined4 local_c;
  
  local_38 = (xmlChar *)0x0;
  local_40 = (xmlChar *)0x0;
  FUN_1001e8830(&local_40,param_1,param_3);
  local_40 = _xmlStrcat(local_40,param_5);
  local_40 = _xmlStrcat(local_40,(xmlChar *)".");
  if (param_7 + param_6 < 1) {
    local_40 = _xmlStrcat(local_40,(xmlChar *)"\n");
  }
  else {
    if (param_7 + param_6 < 2) {
      local_38 = _xmlStrdup((xmlChar *)" Expected is ( ");
    }
    else {
      local_38 = _xmlStrdup((xmlChar *)" Expected is one of ( ");
    }
    local_28 = (xmlChar *)0x0;
    for (local_10 = 0; local_10 < param_7 + param_6; local_10 = local_10 + 1) {
      local_20 = *(xmlChar **)((long)local_10 * 8 + param_8);
      if (local_20 != (xmlChar *)0x0) {
        if ((((*local_20 == 'n') && (local_20[1] == 'o')) && (local_20[2] == 't')) &&
           (local_20[3] == ' ')) {
          local_c = 1;
          local_20 = local_20 + 4;
          local_38 = _xmlStrcat(local_38,(xmlChar *)"##other");
        }
        else {
          local_c = 0;
        }
        local_30 = (xmlChar *)0x0;
        local_18 = local_20;
        if (*local_20 == '*') {
          local_30 = _xmlStrdup((xmlChar *)"*");
          local_18 = local_18 + 1;
        }
        else {
          for (; (*local_18 != '\0' && (*local_18 != '|')); local_18 = local_18 + 1) {
          }
          local_30 = _xmlStrncat((xmlChar *)0x0,local_20,(int)local_18 - (int)local_20);
        }
        if (*local_18 != '\0') {
          local_18 = local_18 + 1;
          if (((param_7 != 0) && (*local_18 == '*')) && (*local_30 == '*')) {
            if (local_30 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_30);
              local_30 = (xmlChar *)0x0;
            }
            goto LAB_1001e9832;
          }
          local_20 = local_18;
          if (*local_18 == '*') {
            local_28 = _xmlStrdup((xmlChar *)"{*}");
          }
          else {
            for (; *local_18 != '\0'; local_18 = local_18 + 1) {
            }
            if (local_10 < param_6) {
              local_28 = _xmlStrdup((xmlChar *)"{");
            }
            else {
              local_28 = _xmlStrdup((xmlChar *)"{##other:");
            }
            local_28 = _xmlStrncat(local_28,local_20,(int)local_18 - (int)local_20);
            local_28 = _xmlStrcat(local_28,(xmlChar *)"}");
          }
          local_38 = _xmlStrcat(local_38,local_28);
          if (local_28 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_28);
            local_28 = (xmlChar *)0x0;
          }
        }
        local_38 = _xmlStrcat(local_38,local_30);
        if (local_30 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_30);
          local_30 = (xmlChar *)0x0;
        }
        if (local_10 < param_7 + param_6 + -1) {
          local_38 = _xmlStrcat(local_38,(xmlChar *)", ");
        }
      }
LAB_1001e9832:
    }
    local_38 = _xmlStrcat(local_38,(xmlChar *)" ).\n");
    local_40 = _xmlStrcat(local_40,local_38);
    if (local_38 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_38);
      local_38 = (xmlChar *)0x0;
    }
  }
  FUN_1001e87dd(param_1,param_2,param_3,local_40,0,0);
  (*(code *)_xmlFree)(local_40);
  return;
}

