
xmlChar * _xmlTextReaderConstBaseUri(long param_1)

{
  xmlChar *name;
  undefined8 local_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    name = _xmlNodeGetBase((xmlDocPtr)0x0,*(xmlNodePtr *)(param_1 + 0x70));
    if (name == (xmlChar *)0x0) {
      local_28 = (xmlChar *)0x0;
    }
    else {
      local_28 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0xa0),name,-1);
      (*(code *)_xmlFree)(name);
    }
  }
  return local_28;
}

