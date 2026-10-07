
xmlChar * _xmlStrcat(xmlChar *cur,xmlChar *add)

{
  xmlChar *local_30;
  xmlChar *local_10;
  
  local_30 = cur;
  if (add != (xmlChar *)0x0) {
    local_10 = add;
    if (cur == (xmlChar *)0x0) {
      local_30 = _xmlStrdup(add);
    }
    else {
      for (; *local_10 != '\0'; local_10 = local_10 + 1) {
      }
      local_30 = _xmlStrncat(cur,add,(int)local_10 - (int)add);
    }
  }
  return local_30;
}

