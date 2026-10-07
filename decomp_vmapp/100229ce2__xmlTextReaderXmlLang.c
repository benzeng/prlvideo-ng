
xmlChar * _xmlTextReaderXmlLang(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_18 = (xmlChar *)0x0;
  }
  else {
    local_18 = _xmlNodeGetLang(*(xmlNodePtr *)(param_1 + 0x70));
  }
  return local_18;
}

