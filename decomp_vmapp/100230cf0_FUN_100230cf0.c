
undefined4 FUN_100230cf0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    local_2c = 0xffffffff;
  }
  else {
    lVar1 = _xmlSchemaGetPredefinedType(param_2,"http://www.w3.org/2001/XMLSchema");
    if (lVar1 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  return local_2c;
}

