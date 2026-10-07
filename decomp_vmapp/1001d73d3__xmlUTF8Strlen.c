
int _xmlUTF8Strlen(xmlChar *utf)

{
  int local_24;
  byte *local_20;
  int local_c;
  
  local_c = 0;
  local_20 = utf;
  if (utf == (xmlChar *)0x0) {
    local_24 = -1;
  }
  else {
    while (*local_20 != 0) {
      if ((char)*local_20 < '\0') {
        if ((local_20[1] & 0xc0) != 0x80) {
          return -1;
        }
        if ((*local_20 & 0xe0) == 0xe0) {
          if ((local_20[2] & 0xc0) != 0x80) {
            return -1;
          }
          if ((*local_20 & 0xf0) == 0xf0) {
            if (((*local_20 & 0xf8) != 0xf0) || ((local_20[3] & 0xc0) != 0x80)) {
              return -1;
            }
            local_20 = local_20 + 4;
          }
          else {
            local_20 = local_20 + 3;
          }
        }
        else {
          local_20 = local_20 + 2;
        }
      }
      else {
        local_20 = local_20 + 1;
      }
      local_c = local_c + 1;
    }
    local_24 = local_c;
  }
  return local_24;
}

