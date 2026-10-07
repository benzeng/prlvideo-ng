
xmlChar * _xmlXPathCastBooleanToString(int val)

{
  xmlChar *local_10;
  
  if (val == 0) {
    local_10 = _xmlStrdup((xmlChar *)"false");
  }
  else {
    local_10 = _xmlStrdup((xmlChar *)"true");
  }
  return local_10;
}

