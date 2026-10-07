
undefined8 _xmlSchemaGetFacetValueAsULong(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
  }
  return local_18;
}

