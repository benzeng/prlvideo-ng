
xmlChar * _xmlTextReaderConstString(long param_1,xmlChar *param_2)

{
  undefined8 local_20;
  
  if (param_1 == 0) {
    local_20 = (xmlChar *)0x0;
  }
  else {
    local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),param_2,-1);
  }
  return local_20;
}

