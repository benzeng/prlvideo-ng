
xmlChar * _xmlSplitQName2(xmlChar *name,xmlChar **prefix)

{
  xmlChar *pxVar1;
  xmlChar *local_30;
  int local_14;
  
  local_14 = 0;
  if (prefix == (xmlChar **)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    *prefix = (xmlChar *)0x0;
    if (name == (xmlChar *)0x0) {
      local_30 = (xmlChar *)0x0;
    }
    else if (*name == ':') {
      local_30 = (xmlChar *)0x0;
    }
    else {
      for (; (name[local_14] != '\0' && (name[local_14] != ':')); local_14 = local_14 + 1) {
      }
      if (name[local_14] == '\0') {
        local_30 = (xmlChar *)0x0;
      }
      else {
        pxVar1 = _xmlStrndup(name,local_14);
        *prefix = pxVar1;
        if (*prefix == (xmlChar *)0x0) {
          FUN_1008991e0("QName split");
          local_30 = (xmlChar *)0x0;
        }
        else {
          local_30 = _xmlStrdup(name + (long)local_14 + 1);
          if (local_30 == (xmlChar *)0x0) {
            FUN_1008991e0("QName split");
            if (*prefix != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(*prefix);
              *prefix = (xmlChar *)0x0;
            }
            local_30 = (xmlChar *)0x0;
          }
        }
      }
    }
  }
  return local_30;
}

