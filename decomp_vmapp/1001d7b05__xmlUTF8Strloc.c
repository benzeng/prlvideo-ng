
int _xmlUTF8Strloc(xmlChar *utf,xmlChar *utfchar)

{
  byte bVar1;
  int len;
  int iVar2;
  byte *local_20;
  int local_14;
  byte local_9;
  
  if ((utf != (xmlChar *)0x0) && (utfchar != (xmlChar *)0x0)) {
    len = _xmlUTF8Strsize(utfchar,1);
    local_14 = 0;
    local_20 = utf;
    while (local_9 = *local_20, local_9 != 0) {
      iVar2 = _xmlStrncmp(local_20,utfchar,len);
      if (iVar2 == 0) {
        return local_14;
      }
      local_20 = local_20 + 1;
      if ((char)local_9 < '\0') {
        if ((local_9 & 0xc0) != 0xc0) {
          return -1;
        }
        while (local_9 = local_9 << 1, (char)local_9 < '\0') {
          bVar1 = *local_20;
          local_20 = local_20 + 1;
          if ((bVar1 & 0xc0) != 0x80) {
            return -1;
          }
        }
      }
      local_14 = local_14 + 1;
    }
  }
  return -1;
}

