
xmlChar * _xmlStrchr(xmlChar *str,xmlChar val)

{
  xmlChar *local_10;
  
  local_10 = str;
  if (str != (xmlChar *)0x0) {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
      if (*local_10 == val) {
        return local_10;
      }
    }
  }
  return (xmlChar *)0x0;
}

