
undefined4
FUN_1001efa9f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  xmlChar *str1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  
  str1 = (xmlChar *)FUN_1001ecf8b(param_1,param_4,param_5);
  local_58 = param_6;
  if (str1 != (xmlChar *)0x0) {
    iVar1 = _xmlStrEqual(str1,(xmlChar *)"true");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(str1,(xmlChar *)"false");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(str1,(xmlChar *)"1");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(str1,(xmlChar *)"0");
          if (iVar1 == 0) {
            uVar2 = _xmlSchemaGetBuiltInType(0xf);
            uVar3 = FUN_1001ece01(param_4,param_5);
            FUN_1001ea8df(param_1,0x6b2,param_3,uVar3,uVar2,0,str1,0,0,0);
            local_54 = param_6;
          }
          else {
            local_54 = 0;
          }
        }
        else {
          local_54 = 1;
        }
      }
      else {
        local_54 = 0;
      }
    }
    else {
      local_54 = 1;
    }
    local_58 = local_54;
  }
  return local_58;
}

