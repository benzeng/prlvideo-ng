
xmlNodePtr _xmlDocGetRootElement(xmlDocPtr doc)

{
  xmlNodePtr local_28;
  xmlNodePtr local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_28 = (xmlNodePtr)0x0;
  }
  else {
    for (local_10 = doc->children; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
      if (local_10->type == XML_ELEMENT_NODE) {
        return local_10;
      }
    }
    local_28 = local_10;
  }
  return local_28;
}

