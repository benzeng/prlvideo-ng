
undefined8 _xmlSchemaValueGetAsString(uint *param_1)

{
  undefined8 local_20;
  
  if (param_1 == (uint *)0x0) {
    local_20 = 0;
  }
  else if ((*param_1 < 0x2f) && ((1L << ((byte)*param_1 & 0x3f) & 0x400025d70006U) != 0)) {
    local_20 = *(undefined8 *)(param_1 + 4);
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

