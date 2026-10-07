
int _xmlRemoveID(xmlDocPtr doc,xmlAttrPtr attr)

{
  xmlHashTablePtr table;
  xmlChar *name;
  void *pvVar1;
  int local_3c;
  
  if (doc == (xmlDocPtr)0x0) {
    local_3c = -1;
  }
  else if (attr == (xmlAttrPtr)0x0) {
    local_3c = -1;
  }
  else {
    table = doc->ids;
    if (table == (xmlHashTablePtr)0x0) {
      local_3c = -1;
    }
    else if (attr == (xmlAttrPtr)0x0) {
      local_3c = -1;
    }
    else {
      name = _xmlNodeListGetString(doc,attr->children,1);
      if (name == (xmlChar *)0x0) {
        local_3c = -1;
      }
      else {
        pvVar1 = _xmlHashLookup(table,name);
        if ((pvVar1 == (void *)0x0) || (*(xmlAttrPtr *)((long)pvVar1 + 0x10) != attr)) {
          (*(code *)_xmlFree)(name);
          local_3c = -1;
        }
        else {
          _xmlHashRemoveEntry(table,name,FUN_100187f61);
          (*(code *)_xmlFree)(name);
          attr->atype = 0;
          local_3c = 0;
        }
      }
    }
  }
  return local_3c;
}

