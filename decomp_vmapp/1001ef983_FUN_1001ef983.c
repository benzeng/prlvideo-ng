
undefined4
FUN_1001ef983(undefined8 param_1,undefined8 param_2,undefined8 param_3,xmlNodePtr param_4)

{
  int iVar1;
  xmlChar *str1;
  undefined8 uVar2;
  undefined4 local_c;
  
  local_c = 0;
  str1 = _xmlNodeGetContent(param_4);
  iVar1 = _xmlStrEqual(str1,(xmlChar *)"true");
  if (iVar1 == 0) {
    iVar1 = _xmlStrEqual(str1,(xmlChar *)"false");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(str1,(xmlChar *)"1");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(str1,(xmlChar *)"0");
        if (iVar1 == 0) {
          uVar2 = _xmlSchemaGetBuiltInType(0xf);
          FUN_1001ea8df(param_1,0x6b2,param_3,param_4,uVar2,0,str1,0,0,0);
        }
        else {
          local_c = 0;
        }
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = 0;
    }
  }
  else {
    local_c = 1;
  }
  if (str1 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(str1);
  }
  return local_c;
}

