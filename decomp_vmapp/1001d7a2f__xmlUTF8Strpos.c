
xmlChar * _xmlUTF8Strpos(xmlChar *utf,int pos)

{
  byte bVar1;
  byte *local_30;
  int local_24;
  byte *local_20;
  byte local_9;
  
  if (utf == (xmlChar *)0x0) {
    local_30 = (byte *)0x0;
  }
  else {
    local_24 = pos;
    local_20 = utf;
    if (pos < 0) {
      local_30 = (byte *)0x0;
    }
    else {
      while (local_24 = local_24 + -1, local_24 != -1) {
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
      local_30 = local_20;
    }
  }
  return local_30;
}

