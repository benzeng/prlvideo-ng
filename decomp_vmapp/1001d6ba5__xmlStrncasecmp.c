
int _xmlStrncasecmp(xmlChar *str1,xmlChar *str2,int len)

{
  byte bVar1;
  int local_24;
  int local_1c;
  byte *local_18;
  byte *local_10;
  
  if (len < 1) {
    local_24 = 0;
  }
  else if (str1 == str2) {
    local_24 = 0;
  }
  else if (str1 == (xmlChar *)0x0) {
    local_24 = -1;
  }
  else {
    local_1c = len;
    local_18 = str2;
    local_10 = str1;
    if (str2 == (xmlChar *)0x0) {
      local_24 = 1;
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
        local_1c = local_1c + -1;
        if (local_1c == 0) {
          return 0;
        }
        bVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (bVar1 != 0);
      local_24 = 0;
    }
  }
  return local_24;
}

