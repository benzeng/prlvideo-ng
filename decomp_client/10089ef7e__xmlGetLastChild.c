
xmlNodePtr _xmlGetLastChild(xmlNodePtr parent)

{
  xmlNodePtr local_18;
  
  if (parent == (xmlNodePtr)0x0) {
    local_18 = (xmlNodePtr)0x0;
  }
  else {
    local_18 = parent->last;
  }
  return local_18;
}

