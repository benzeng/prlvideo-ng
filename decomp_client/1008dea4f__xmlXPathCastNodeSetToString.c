
xmlChar * _xmlXPathCastNodeSetToString(xmlNodeSetPtr ns)

{
  xmlChar *local_18;
  
  if (((ns == (xmlNodeSetPtr)0x0) || (ns->nodeNr == 0)) || (ns->nodeTab == (xmlNodePtr *)0x0)) {
    local_18 = _xmlStrdup((xmlChar *)"");
  }
  else {
    _xmlXPathNodeSetSort(ns);
    local_18 = _xmlXPathCastNodeToString(*ns->nodeTab);
  }
  return local_18;
}

