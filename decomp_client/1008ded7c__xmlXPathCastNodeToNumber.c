
double _xmlXPathCastNodeToNumber(xmlNodePtr node)

{
  xmlChar *val;
  undefined8 local_28;
  
  if (node == (xmlNodePtr)0x0) {
    local_28 = _xmlXPathNAN;
  }
  else {
    val = _xmlXPathCastNodeToString(node);
    if (val == (xmlChar *)0x0) {
      local_28 = _xmlXPathNAN;
    }
    else {
      local_28 = _xmlXPathCastStringToNumber(val);
      (*(code *)_xmlFree)(val);
    }
  }
  return local_28;
}

