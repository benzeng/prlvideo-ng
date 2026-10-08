
xmlNsPtr * _xmlGetNsList(xmlDocPtr doc,xmlNodePtr node)

{
  int iVar1;
  xmlNodePtr local_38;
  xmlNsPtr local_28;
  xmlNsPtr *local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = (xmlNsPtr *)0x0;
  local_14 = 0;
  local_10 = 10;
  local_38 = node;
  do {
    if (local_38 == (xmlNodePtr)0x0) {
      return local_20;
    }
    if (local_38->type == XML_ELEMENT_NODE) {
      for (local_28 = local_38->nsDef; local_28 != (xmlNsPtr)0x0; local_28 = local_28->next) {
        if (local_20 == (xmlNsPtr *)0x0) {
          local_20 = (xmlNsPtr *)(*(code *)_xmlMalloc)((long)(local_10 + 1) * 8);
          if (local_20 == (xmlNsPtr *)0x0) {
            FUN_1008991e0("getting namespace list");
            return (xmlNsPtr *)0x0;
          }
          local_20[local_14] = (xmlNsPtr)0x0;
        }
        local_c = 0;
        while (((local_c < local_14 && (local_28->prefix != local_20[local_c]->prefix)) &&
               (iVar1 = _xmlStrEqual(local_28->prefix,local_20[local_c]->prefix), iVar1 == 0))) {
          local_c = local_c + 1;
        }
        if (local_14 <= local_c) {
          if (local_10 <= local_14) {
            local_10 = local_10 * 2;
            local_20 = (xmlNsPtr *)(*(code *)_xmlRealloc)(local_20,(long)(local_10 + 1) * 8);
            if (local_20 == (xmlNsPtr *)0x0) {
              FUN_1008991e0("getting namespace list");
              return (xmlNsPtr *)0x0;
            }
          }
          local_20[local_14] = local_28;
          local_14 = local_14 + 1;
          local_20[local_14] = (xmlNsPtr)0x0;
        }
      }
    }
    local_38 = local_38->parent;
  } while( true );
}

