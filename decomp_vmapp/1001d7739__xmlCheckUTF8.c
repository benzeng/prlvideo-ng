
int _xmlCheckUTF8(uchar *utf)

{
  byte bVar1;
  int local_24;
  int local_10;
  
  if (utf == (uchar *)0x0) {
    local_24 = 0;
  }
  else {
    local_10 = 0;
    while (bVar1 = utf[local_10], bVar1 != 0) {
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          if ((utf[(long)local_10 + 1] & 0xc0) != 0x80) {
            return 0;
          }
          local_10 = local_10 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          if (((utf[(long)local_10 + 1] & 0xc0) != 0x80) ||
             ((utf[(long)local_10 + 2] & 0xc0) != 0x80)) {
            return 0;
          }
          local_10 = local_10 + 3;
        }
        else {
          if ((bVar1 & 0xf8) != 0xf0) {
            return 0;
          }
          if ((((utf[(long)local_10 + 1] & 0xc0) != 0x80) ||
              ((utf[(long)local_10 + 2] & 0xc0) != 0x80)) ||
             ((utf[(long)local_10 + 3] & 0xc0) != 0x80)) {
            return 0;
          }
          local_10 = local_10 + 4;
        }
      }
      else {
        local_10 = local_10 + 1;
      }
    }
    local_24 = 1;
  }
  return local_24;
}

