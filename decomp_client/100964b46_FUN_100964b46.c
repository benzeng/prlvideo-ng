
undefined4 FUN_100964b46(undefined8 param_1,xmlChar *param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  if (param_2 == (xmlChar *)0x0) {
    local_1c = 0xffffffff;
  }
  else {
    iVar1 = _xmlStrEqual(param_2,(xmlChar *)"string");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_2,(xmlChar *)"token");
      if (iVar1 == 0) {
        local_1c = 0;
      }
      else {
        local_1c = 1;
      }
    }
    else {
      local_1c = 1;
    }
  }
  return local_1c;
}

