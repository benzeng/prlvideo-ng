
xmlChar * _xmlSplitQName3(xmlChar *name,int *len)

{
  xmlChar *local_30;
  int local_c;
  
  local_c = 0;
  if (name == (xmlChar *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (len == (int *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (*name == ':') {
    local_30 = (xmlChar *)0x0;
  }
  else {
    for (; (name[local_c] != '\0' && (name[local_c] != ':')); local_c = local_c + 1) {
    }
    if (name[local_c] == '\0') {
      local_30 = (xmlChar *)0x0;
    }
    else {
      *len = local_c;
      local_30 = name + (long)local_c + 1;
    }
  }
  return local_30;
}

