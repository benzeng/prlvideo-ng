
int _xmlStrcasecmp(xmlChar *str1,xmlChar *str2)

{
  byte bVar1;
  int local_20;
  byte *local_18;
  byte *local_10;
  
  if (str1 == str2) {
    local_20 = 0;
  }
  else if (str1 == (xmlChar *)0x0) {
    local_20 = -1;
  }
  else {
    local_18 = str2;
    local_10 = str1;
    if (str2 == (xmlChar *)0x0) {
      local_20 = 1;
    }
    else {
      do {
        bVar1 = *local_10;
        local_10 = local_10 + 1;
        if ((uint)(byte)(&DAT_100b359a0)[(int)(uint)bVar1] -
            (uint)(byte)(&DAT_100b359a0)[(int)(uint)*local_18] != 0) {
          return (uint)(byte)(&DAT_100b359a0)[(int)(uint)bVar1] -
                 (uint)(byte)(&DAT_100b359a0)[(int)(uint)*local_18];
        }
        bVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (bVar1 != 0);
      local_20 = 0;
    }
  }
  return local_20;
}

