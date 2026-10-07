
xmlDtdPtr _xmlGetIntSubset(xmlDocPtr doc)

{
  xmlDtdPtr local_28;
  xmlDtdPtr local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_28 = (xmlDtdPtr)0x0;
  }
  else {
    for (local_10 = (xmlDtdPtr)doc->children; local_10 != (xmlDtdPtr)0x0;
        local_10 = (xmlDtdPtr)local_10->next) {
      if (local_10->type == XML_DTD_NODE) {
        return local_10;
      }
    }
    local_28 = doc->intSubset;
  }
  return local_28;
}

