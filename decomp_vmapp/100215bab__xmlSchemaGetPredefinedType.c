
void * _xmlSchemaGetPredefinedType(xmlChar *param_1,xmlChar *param_2)

{
  undefined8 local_20;
  
  if (DAT_1011b8798 == 0) {
    _xmlSchemaInitTypes();
  }
  if (param_1 == (xmlChar *)0x0) {
    local_20 = (void *)0x0;
  }
  else {
    local_20 = _xmlHashLookup2(DAT_1011b87a0,param_1,param_2);
  }
  return local_20;
}

