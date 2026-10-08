
int _xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr ns)

{
  int local_14;
  
  if ((ns == (xmlNodeSetPtr)0x0) || (ns->nodeNr == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}

