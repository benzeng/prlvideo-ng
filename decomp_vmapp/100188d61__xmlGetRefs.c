
xmlListPtr _xmlGetRefs(xmlDocPtr doc,xmlChar *ID)

{
  xmlListPtr local_30;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlListPtr)0x0;
  }
  else if (ID == (xmlChar *)0x0) {
    local_30 = (xmlListPtr)0x0;
  }
  else if (doc->refs == (xmlHashTablePtr)0x0) {
    local_30 = (xmlListPtr)0x0;
  }
  else {
    local_30 = _xmlHashLookup(doc->refs,ID);
  }
  return local_30;
}

