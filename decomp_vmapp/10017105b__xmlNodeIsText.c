
int _xmlNodeIsText(xmlNodePtr node)

{
  int local_14;
  
  if (node == (xmlNodePtr)0x0) {
    local_14 = 0;
  }
  else if (node->type == XML_TEXT_NODE) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

