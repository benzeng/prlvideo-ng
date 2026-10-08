
int _xmlRemoveRef(xmlDocPtr doc,xmlAttrPtr attr)

{
  int iVar1;
  int local_4c;
  xmlListPtr local_38;
  xmlAttrPtr local_30;
  xmlListPtr local_20;
  xmlHashTablePtr local_18;
  xmlChar *local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_4c = -1;
  }
  else if (attr == (xmlAttrPtr)0x0) {
    local_4c = -1;
  }
  else {
    local_18 = doc->refs;
    if (local_18 == (xmlHashTablePtr)0x0) {
      local_4c = -1;
    }
    else if (attr == (xmlAttrPtr)0x0) {
      local_4c = -1;
    }
    else {
      local_10 = _xmlNodeListGetString(doc,attr->children,1);
      if (local_10 == (xmlChar *)0x0) {
        local_4c = -1;
      }
      else {
        local_38 = _xmlHashLookup(local_18,local_10);
        local_20 = local_38;
        if (local_38 == (xmlListPtr)0x0) {
          (*(code *)_xmlFree)(local_10);
          local_4c = -1;
        }
        else {
          local_30 = attr;
          _xmlListWalk(local_38,FUN_1008bc17c,&local_38);
          iVar1 = _xmlListEmpty(local_20);
          if (iVar1 != 0) {
            _xmlHashUpdateEntry(local_18,local_10,(void *)0x0,FUN_1008bc15e);
          }
          (*(code *)_xmlFree)(local_10);
          local_4c = 0;
        }
      }
    }
  }
  return local_4c;
}

