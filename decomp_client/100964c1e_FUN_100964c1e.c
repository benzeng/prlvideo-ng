
int FUN_100964c1e(undefined8 param_1,xmlChar *param_2,xmlChar *param_3,undefined8 param_4,
                 undefined8 param_5,xmlChar *param_6)

{
  int iVar1;
  xmlChar *str1;
  xmlChar *str2;
  int local_1c;
  
  local_1c = -1;
  iVar1 = _xmlStrEqual(param_2,(xmlChar *)"string");
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(param_2,(xmlChar *)"token");
    if (iVar1 != 0) {
      iVar1 = _xmlStrEqual(param_3,param_6);
      if (iVar1 == 0) {
        str1 = (xmlChar *)FUN_100970916(0,param_3);
        str2 = (xmlChar *)FUN_100970916(0,param_6);
        if ((str1 == (xmlChar *)0x0) || (str2 == (xmlChar *)0x0)) {
          local_1c = -1;
        }
        else {
          iVar1 = _xmlStrEqual(str1,str2);
          if (iVar1 == 0) {
            local_1c = 0;
          }
          else {
            local_1c = 1;
          }
        }
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        if (str2 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str2);
        }
      }
      else {
        local_1c = 1;
      }
    }
  }
  else {
    local_1c = _xmlStrEqual(param_3,param_6);
  }
  return local_1c;
}

