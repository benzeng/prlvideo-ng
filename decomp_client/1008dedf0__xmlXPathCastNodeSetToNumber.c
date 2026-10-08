
double _xmlXPathCastNodeSetToNumber(xmlNodeSetPtr ns)

{
  xmlChar *val;
  undefined8 local_28;
  
  if (ns == (xmlNodeSetPtr)0x0) {
    local_28 = _xmlXPathNAN;
  }
  else {
    val = _xmlXPathCastNodeSetToString(ns);
    local_28 = _xmlXPathCastStringToNumber(val);
    (*(code *)_xmlFree)(val);
  }
  return local_28;
}

