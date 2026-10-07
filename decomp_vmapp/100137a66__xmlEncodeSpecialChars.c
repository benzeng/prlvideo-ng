
xmlChar * _xmlEncodeSpecialChars(xmlDocPtr doc,xmlChar *input)

{
  int iVar1;
  xmlChar *local_40;
  xmlChar *local_28;
  xmlChar *local_20;
  xmlChar *local_18;
  int local_10;
  
  if (input == (xmlChar *)0x0) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    local_10 = 1000;
    local_20 = (xmlChar *)(*(code *)_xmlMalloc)(1000);
    local_28 = input;
    local_18 = local_20;
    if (local_20 == (xmlChar *)0x0) {
      FUN_100136740("xmlEncodeSpecialChars: malloc failed");
      local_40 = (xmlChar *)0x0;
    }
    else {
      for (; *local_28 != '\0'; local_28 = local_28 + 1) {
        if ((long)(local_10 + -10) < (long)local_18 - (long)local_20) {
          iVar1 = (int)local_20;
          local_10 = local_10 << 1;
          local_20 = (xmlChar *)(*(code *)_xmlRealloc)(local_20,(long)local_10);
          if (local_20 == (xmlChar *)0x0) {
            FUN_100136740("xmlEncodeEntitiesReentrant: realloc failed");
            return (xmlChar *)0x0;
          }
          local_18 = local_20 + ((int)local_18 - iVar1);
        }
        if (*local_28 == '<') {
          builtin_memcpy(local_18,"&lt;",4);
          local_18 = local_18 + 4;
        }
        else if (*local_28 == '>') {
          builtin_memcpy(local_18,"&gt;",4);
          local_18 = local_18 + 4;
        }
        else if (*local_28 == '&') {
          builtin_memcpy(local_18,"&amp;",5);
          local_18 = local_18 + 5;
        }
        else if (*local_28 == '\"') {
          builtin_memcpy(local_18,"&quot;",6);
          local_18 = local_18 + 6;
        }
        else if (*local_28 == '\r') {
          builtin_memcpy(local_18,"&#13;",5);
          local_18 = local_18 + 5;
        }
        else {
          *local_18 = *local_28;
          local_18 = local_18 + 1;
        }
      }
      *local_18 = '\0';
      local_40 = local_20;
    }
  }
  return local_40;
}

