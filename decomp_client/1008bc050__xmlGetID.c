
xmlAttrPtr _xmlGetID(xmlDocPtr doc,xmlChar *ID)

{
  void *pvVar1;
  xmlDocPtr local_30;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlDocPtr)0x0;
  }
  else if (ID == (xmlChar *)0x0) {
    local_30 = (xmlDocPtr)0x0;
  }
  else if (doc->ids == (xmlHashTablePtr)0x0) {
    local_30 = (xmlDocPtr)0x0;
  }
  else {
    pvVar1 = _xmlHashLookup(doc->ids,ID);
    if (pvVar1 == (void *)0x0) {
      local_30 = (xmlDocPtr)0x0;
    }
    else {
      local_30 = doc;
      if (*(long *)((long)pvVar1 + 0x10) != 0) {
        local_30 = *(xmlDocPtr *)((long)pvVar1 + 0x10);
      }
    }
  }
  return (xmlAttrPtr)local_30;
}

