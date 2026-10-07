
int _xmlUTF8Strsize(xmlChar *utf,int len)

{
  bool bVar1;
  int local_24;
  xmlChar *local_18;
  xmlChar local_9;
  
  if ((utf == (xmlChar *)0x0) || (local_24 = len, local_18 = utf, len < 1)) {
    return 0;
  }
  do {
    do {
      bVar1 = local_24 < 1;
      local_24 = local_24 + -1;
      if ((bVar1) || (*local_18 == '\0')) {
        return (int)local_18 - (int)utf;
      }
      local_9 = *local_18;
      local_18 = local_18 + 1;
    } while (-1 < (char)local_9);
    do {
      local_9 = local_9 << 1;
      if (-1 < (char)local_9) break;
      local_18 = local_18 + 1;
    } while (*local_18 != '\0');
  } while( true );
}

