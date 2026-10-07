
int _xmlStrlen(xmlChar *str)

{
  int local_24;
  xmlChar *local_20;
  int local_c;
  
  local_c = 0;
  local_20 = str;
  if (str == (xmlChar *)0x0) {
    local_24 = 0;
  }
  else {
    for (; *local_20 != '\0'; local_20 = local_20 + 1) {
      local_c = local_c + 1;
    }
    local_24 = local_c;
  }
  return local_24;
}

