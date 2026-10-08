
xmlChar * _xmlStrcasestr(xmlChar *str,xmlChar *val)

{
  int len;
  int iVar1;
  xmlChar *local_30;
  byte *local_20;
  
  if (str == (xmlChar *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (val == (xmlChar *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    len = _xmlStrlen(val);
    local_30 = str;
    local_20 = str;
    if (len != 0) {
      for (; *local_20 != 0; local_20 = local_20 + 1) {
        if (((&DAT_101c9baa0)[(int)(uint)*local_20] == (&DAT_101c9baa0)[(int)(uint)*val]) &&
           (iVar1 = _xmlStrncasecmp(local_20,val,len), iVar1 == 0)) {
          return local_20;
        }
      }
      local_30 = (xmlChar *)0x0;
    }
  }
  return local_30;
}

