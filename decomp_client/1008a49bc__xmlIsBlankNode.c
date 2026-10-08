
int _xmlIsBlankNode(xmlNodePtr node)

{
  int local_24;
  byte *local_10;
  
  if (node == (xmlNodePtr)0x0) {
    local_24 = 0;
  }
  else if ((node->type == XML_TEXT_NODE) || (node->type == XML_CDATA_SECTION_NODE)) {
    if (node->content == (xmlChar *)0x0) {
      local_24 = 1;
    }
    else {
      for (local_10 = node->content; *local_10 != 0; local_10 = local_10 + 1) {
        if ((*local_10 != 0x20) && (((*local_10 < 9 || (10 < *local_10)) && (*local_10 != 0xd)))) {
          return 0;
        }
      }
      local_24 = 1;
    }
  }
  else {
    local_24 = 0;
  }
  return local_24;
}

