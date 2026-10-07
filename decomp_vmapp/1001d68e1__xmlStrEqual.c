
int _xmlStrEqual(xmlChar *str1,xmlChar *str2)

{
  xmlChar xVar1;
  int local_1c;
  xmlChar *local_18;
  xmlChar *local_10;
  
  if (str1 == str2) {
    local_1c = 1;
  }
  else if (str1 == (xmlChar *)0x0) {
    local_1c = 0;
  }
  else {
    local_18 = str2;
    local_10 = str1;
    if (str2 == (xmlChar *)0x0) {
      local_1c = 0;
    }
    else {
      do {
        xVar1 = *local_10;
        local_10 = local_10 + 1;
        if (xVar1 != *local_18) {
          return 0;
        }
        xVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (xVar1 != '\0');
      local_1c = 1;
    }
  }
  return local_1c;
}

