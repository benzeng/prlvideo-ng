
xmlNodeSetPtr _xmlXPathDistinctSorted(xmlNodeSetPtr param_1)

{
  xmlHashTablePtr table;
  xmlChar *name;
  void *pvVar1;
  xmlNodeSetPtr local_58;
  int local_4c;
  xmlNodePtr local_48;
  int local_20;
  
  local_58 = param_1;
  if (((param_1 != (xmlNodeSetPtr)0x0) && (param_1->nodeNr != 0)) &&
     (param_1->nodeTab != (xmlNodePtr *)0x0)) {
    local_58 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
    if (param_1 == (xmlNodeSetPtr)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = param_1->nodeNr;
    }
    table = _xmlHashCreate(local_4c);
    for (local_20 = 0; local_20 < local_4c; local_20 = local_20 + 1) {
      if (((param_1 == (xmlNodeSetPtr)0x0) || (local_20 < 0)) || (param_1->nodeNr <= local_20)) {
        local_48 = (xmlNodePtr)0x0;
      }
      else {
        local_48 = param_1->nodeTab[local_20];
      }
      name = _xmlXPathCastNodeToString(local_48);
      pvVar1 = _xmlHashLookup(table,name);
      if (pvVar1 == (void *)0x0) {
        _xmlHashAddEntry(table,name,name);
        _xmlXPathNodeSetAddUnique(local_58,local_48);
      }
      else {
        (*(code *)_xmlFree)(name);
      }
    }
    _xmlHashFree(table,(xmlHashDeallocator)_xmlFree);
  }
  return local_58;
}

