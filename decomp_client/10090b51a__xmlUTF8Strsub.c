
xmlChar * _xmlUTF8Strsub(xmlChar *utf,int start,int len)

{
  byte bVar1;
  xmlChar *local_30;
  byte *local_20;
  int local_10;
  byte local_9;
  
  if (utf == (xmlChar *)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (start < 0) {
    local_30 = (xmlChar *)0x0;
  }
  else if (len < 0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    local_20 = utf;
    for (local_10 = 0; local_10 < start; local_10 = local_10 + 1) {
      local_9 = *local_20;
      local_20 = local_20 + 1;
      if (local_9 == 0) {
        return (xmlChar *)0x0;
      }
      if ((char)local_9 < '\0') {
        if ((local_9 & 0xc0) != 0xc0) {
          return (xmlChar *)0x0;
        }
        while (local_9 = local_9 << 1, (char)local_9 < '\0') {
          bVar1 = *local_20;
          local_20 = local_20 + 1;
          if ((bVar1 & 0xc0) != 0x80) {
            return (xmlChar *)0x0;
          }
        }
      }
    }
    local_30 = _xmlUTF8Strndup(local_20,len);
  }
  return local_30;
}

