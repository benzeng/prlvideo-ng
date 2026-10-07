
undefined4 FUN_100231284(undefined8 param_1,xmlChar *param_2,long param_3)

{
  int iVar1;
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_34 = 0xffffffff;
  }
  else {
    iVar1 = _xmlStrEqual(param_2,(xmlChar *)"string");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_2,(xmlChar *)"token");
      if (iVar1 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
    else {
      local_34 = 1;
    }
  }
  return local_34;
}

