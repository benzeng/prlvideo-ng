
int _xmlUTF8Size(xmlChar *utf)

{
  int local_24;
  byte local_d;
  int local_c;
  
  if (utf == (xmlChar *)0x0) {
    local_24 = -1;
  }
  else if ((char)*utf < '\0') {
    if ((*utf >> 6 & 1) == 0) {
      local_24 = -1;
    }
    else {
      local_c = 2;
      for (local_d = 0x20; local_d != 0; local_d = local_d >> 1) {
        if ((*utf & local_d) == 0) {
          return local_c;
        }
        local_c = local_c + 1;
      }
      local_24 = -1;
    }
  }
  else {
    local_24 = 1;
  }
  return local_24;
}

