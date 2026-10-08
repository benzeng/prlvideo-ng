
long _xmlXPathOrderDocElems(xmlDocPtr doc)

{
  long local_28;
  long local_18;
  xmlDocPtr local_10;
  
  local_18 = 0;
  if (doc == (xmlDocPtr)0x0) {
    local_28 = -1;
  }
  else {
    local_10 = (xmlDocPtr)doc->children;
LAB_1008db75d:
    if (local_10 != (xmlDocPtr)0x0) {
      if (local_10->type == XML_ELEMENT_NODE) {
        local_18 = local_18 + 1;
        local_10->intSubset = (_xmlDtd *)-local_18;
        if (local_10->children != (_xmlNode *)0x0) {
          local_10 = (xmlDocPtr)local_10->children;
          goto LAB_1008db75d;
        }
      }
      if (local_10->next == (_xmlNode *)0x0) {
        do {
          local_10 = (xmlDocPtr)local_10->parent;
          if (local_10 == (xmlDocPtr)0x0) break;
          if (local_10 == doc) {
            local_10 = (xmlDocPtr)0x0;
            break;
          }
          if (local_10->next != (_xmlNode *)0x0) {
            local_10 = (xmlDocPtr)local_10->next;
            break;
          }
        } while (local_10 != (xmlDocPtr)0x0);
      }
      else {
        local_10 = (xmlDocPtr)local_10->next;
      }
      goto LAB_1008db75d;
    }
    local_28 = local_18;
  }
  return local_28;
}

