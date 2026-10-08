
xmlChar * _xmlStrsub(xmlChar *str,int start,int len)

{
  xmlChar *local_30;
  xmlChar *local_20;
  int local_c;
  
  if (str == (xmlChar *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (start < 0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (len < 0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    local_20 = str;
    for (local_c = 0; local_c < start; local_c = local_c + 1) {
      if (*local_20 == '\0') {
        return (xmlChar *)0x0;
      }
      local_20 = local_20 + 1;
    }
    if (*local_20 == '\0') {
      local_30 = (xmlChar *)0x0;
    }
    else {
      local_30 = _xmlStrndup(local_20,len);
    }
  }
  return local_30;
}

