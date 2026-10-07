
xmlChar * FUN_1001ecf24(long param_1,xmlNodePtr param_2)

{
  xmlChar *pxVar1;
  xmlChar *local_18;
  
  local_18 = _xmlNodeGetContent(param_2);
  if (local_18 == (xmlChar *)0x0) {
    local_18 = _xmlStrdup((xmlChar *)"");
  }
  pxVar1 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),local_18,-1);
  (*(code *)_xmlFree)(local_18);
  return pxVar1;
}

