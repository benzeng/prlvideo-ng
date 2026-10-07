
int _xmlStrQEqual(xmlChar *pref,xmlChar *name,xmlChar *str)

{
  xmlChar *pxVar1;
  xmlChar xVar2;
  int local_24;
  xmlChar *local_20;
  xmlChar *local_18;
  xmlChar *local_10;
  
  if (pref == (xmlChar *)0x0) {
    local_24 = _xmlStrEqual(name,str);
  }
  else if (name == (xmlChar *)0x0) {
    local_24 = 0;
  }
  else {
    pxVar1 = str;
    local_10 = pref;
    if (str == (xmlChar *)0x0) {
      local_24 = 0;
    }
    else {
      do {
        local_20 = pxVar1;
        xVar2 = *local_10;
        local_10 = local_10 + 1;
        if (xVar2 != *local_20) {
          return 0;
        }
        pxVar1 = local_20 + 1;
      } while ((*local_20 != '\0') && (*local_10 != '\0'));
      local_20 = local_20 + 2;
      local_18 = name;
      if (*pxVar1 == ':') {
        do {
          xVar2 = *local_18;
          local_18 = local_18 + 1;
          if (xVar2 != *local_20) {
            return 0;
          }
          xVar2 = *local_20;
          local_20 = local_20 + 1;
        } while (xVar2 != '\0');
        local_24 = 1;
      }
      else {
        local_24 = 0;
      }
    }
  }
  return local_24;
}

