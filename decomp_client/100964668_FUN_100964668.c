
undefined4
FUN_100964668(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined4 local_44;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    local_44 = 0xffffffff;
  }
  else {
    lVar2 = _xmlSchemaGetPredefinedType(param_2,"http://www.w3.org/2001/XMLSchema");
    if (lVar2 == 0) {
      local_44 = 0xffffffff;
    }
    else {
      iVar1 = _xmlSchemaValPredefTypeNode(lVar2,param_3,param_4,param_5);
      if (iVar1 == 2) {
        local_44 = 2;
      }
      else if (iVar1 == 0) {
        local_44 = 1;
      }
      else if (iVar1 < 1) {
        local_44 = 0xffffffff;
      }
      else {
        local_44 = 0;
      }
    }
  }
  return local_44;
}

