
uint _xmlSchemaIsValid(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)(*(int *)(param_1 + 0x60) == 0);
  }
  return local_14;
}

