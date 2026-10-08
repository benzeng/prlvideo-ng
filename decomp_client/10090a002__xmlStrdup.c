
xmlChar * _xmlStrdup(xmlChar *cur)

{
  xmlChar *local_28;
  xmlChar *local_10;
  
  local_10 = cur;
  if (cur == (xmlChar *)0x0) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
    }
    local_28 = _xmlStrndup(cur,(int)local_10 - (int)cur);
  }
  return local_28;
}

