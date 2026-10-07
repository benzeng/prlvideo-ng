
undefined8 _xmlSchemaValueGetNext(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 8);
  }
  return local_18;
}

