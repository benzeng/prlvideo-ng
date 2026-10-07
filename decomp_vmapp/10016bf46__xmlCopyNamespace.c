
xmlNsPtr _xmlCopyNamespace(xmlNsPtr cur)

{
  xmlNsPtr local_28;
  
  if (cur == (xmlNsPtr)0x0) {
    local_28 = (xmlNsPtr)0x0;
  }
  else if (cur->type == XML_NAMESPACE_DECL) {
    local_28 = _xmlNewNs((xmlNodePtr)0x0,cur->href,cur->prefix);
  }
  else {
    local_28 = (xmlNsPtr)0x0;
  }
  return local_28;
}

