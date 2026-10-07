
xmlChar * FUN_1001ecf8b(long param_1,xmlNodePtr param_2,xmlChar *param_3)

{
  xmlChar *name;
  undefined8 local_38;
  
  name = _xmlGetNoNsProp(param_2,param_3);
  if (name == (xmlChar *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    local_38 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),name,-1);
    (*(code *)_xmlFree)(name);
  }
  return local_38;
}

