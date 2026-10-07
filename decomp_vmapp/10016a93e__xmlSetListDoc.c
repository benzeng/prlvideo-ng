
void _xmlSetListDoc(xmlNodePtr list,xmlDocPtr doc)

{
  xmlNodePtr local_10;
  
  local_10 = list;
  if (list != (xmlNodePtr)0x0) {
    for (; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
      if (local_10->doc != doc) {
        _xmlSetTreeDoc(local_10,doc);
      }
    }
  }
  return;
}

