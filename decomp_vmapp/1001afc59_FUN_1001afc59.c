
xmlNodeSetPtr FUN_1001afc59(xmlDocPtr param_1,byte *param_2)

{
  xmlChar *ID;
  xmlNodeSetPtr local_50;
  byte *local_48;
  byte *local_28;
  _xmlNode *local_10;
  
  if (param_2 == (byte *)0x0) {
    local_50 = (xmlNodeSetPtr)0x0;
  }
  else {
    local_50 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
    for (local_28 = param_2;
        (*local_28 == 0x20 ||
        (((8 < *local_28 && (*local_28 < 0xb)) || (local_48 = param_2, *local_28 == 0xd))));
        local_28 = local_28 + 1) {
    }
    while (*local_28 != 0) {
      for (; (((*local_28 != 0x20 && ((*local_28 < 9 || (10 < *local_28)))) && (*local_28 != 0xd))
             && (*local_28 != 0)); local_28 = local_28 + 1) {
      }
      ID = _xmlStrndup(local_48,(int)local_28 - (int)local_48);
      if (ID != (xmlChar *)0x0) {
        local_10 = (_xmlNode *)_xmlGetID(param_1,ID);
        if (local_10 != (_xmlNode *)0x0) {
          if (local_10->type == XML_ATTRIBUTE_NODE) {
            local_10 = local_10->parent;
          }
          else if (local_10->type != XML_ELEMENT_NODE) {
            local_10 = (_xmlNode *)0x0;
          }
          if (local_10 != (_xmlNode *)0x0) {
            _xmlXPathNodeSetAdd(local_50,local_10);
          }
        }
        (*(code *)_xmlFree)(ID);
      }
      for (; ((*local_28 == 0x20 || ((8 < *local_28 && (*local_28 < 0xb)))) || (*local_28 == 0xd));
          local_28 = local_28 + 1) {
      }
      local_48 = local_28;
    }
  }
  return local_50;
}

