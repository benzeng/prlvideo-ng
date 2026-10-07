
/* WARNING: Enum "enum_2029": Some values do not have unique names */

long _xmlTextReaderByteConsumed(long param_1)

{
  undefined8 local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    local_18 = -1;
  }
  else {
    local_18 = _xmlByteConsumed(*(xmlParserCtxtPtr *)(param_1 + 0x20));
  }
  return local_18;
}

