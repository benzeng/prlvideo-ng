
undefined4 _xmlSchemaValueAppend(long param_1,long param_2)

{
  undefined4 local_1c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_1c = 0xffffffff;
  }
  else {
    *(long *)(param_1 + 8) = param_2;
    local_1c = 0;
  }
  return local_1c;
}

