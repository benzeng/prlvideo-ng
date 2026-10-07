
undefined4
FUN_1002310ad(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
             long param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 local_5c;
  undefined8 local_28;
  long local_20;
  int local_14;
  long local_10;
  
  local_20 = 0;
  local_28 = 0;
  if (((param_2 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    local_5c = 0xffffffff;
  }
  else {
    local_10 = _xmlSchemaGetPredefinedType(param_2,"http://www.w3.org/2001/XMLSchema");
    if (local_10 == 0) {
      local_5c = 0xffffffff;
    }
    else {
      lVar1 = param_5;
      if (param_5 == 0) {
        iVar2 = _xmlSchemaValPredefTypeNode(local_10,param_3,&local_20,param_4);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        local_14 = 0;
        lVar1 = local_20;
        if (local_20 == 0) {
          return 0xffffffff;
        }
      }
      local_20 = lVar1;
      local_14 = _xmlSchemaValPredefTypeNode(local_10,param_6,&local_28,param_7);
      if (local_14 == 0) {
        if (local_20 == 0) {
          local_5c = 0xffffffff;
        }
        else {
          local_14 = _xmlSchemaCompareValues(local_20,local_28);
          if (local_20 != param_5) {
            _xmlSchemaFreeValue(local_20);
          }
          _xmlSchemaFreeValue(local_28);
          if (local_14 == -2) {
            local_5c = 0xffffffff;
          }
          else if (local_14 == 0) {
            local_5c = 1;
          }
          else {
            local_5c = 0;
          }
        }
      }
      else {
        if ((param_5 == 0) && (local_20 != 0)) {
          _xmlSchemaFreeValue(local_20);
        }
        local_5c = 0xffffffff;
      }
    }
  }
  return local_5c;
}

