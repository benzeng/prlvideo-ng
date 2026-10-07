
xmlChar * _xmlCharStrdup(char *cur)

{
  xmlChar *local_28;
  char *local_10;
  
  local_10 = cur;
  if (cur == (char *)0x0) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
    }
    local_28 = _xmlCharStrndup(cur,(int)local_10 - (int)cur);
  }
  return local_28;
}

