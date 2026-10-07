
xmlChar * _xmlStrncatNew(xmlChar *str1,xmlChar *str2,int len)

{
  int len_00;
  long lVar1;
  xmlChar *pxVar2;
  xmlChar *local_38;
  int local_2c;
  
  local_2c = len;
  if (len < 0) {
    local_2c = _xmlStrlen(str2);
  }
  if ((str2 == (xmlChar *)0x0) || (local_2c == 0)) {
    local_38 = _xmlStrdup(str1);
  }
  else if (str1 == (xmlChar *)0x0) {
    local_38 = _xmlStrndup(str2,local_2c);
  }
  else {
    len_00 = _xmlStrlen(str1);
    local_38 = (xmlChar *)(*(code *)_xmlMalloc)((long)(local_2c + len_00 + 1));
    if (local_38 == (xmlChar *)0x0) {
      _xmlErrMemory(0,0);
      local_38 = _xmlStrndup(str1,len_00);
    }
    else {
      pxVar2 = local_38;
      for (lVar1 = (long)len_00; lVar1 != 0; lVar1 = lVar1 + -1) {
        *pxVar2 = *str1;
        str1 = str1 + 1;
        pxVar2 = pxVar2 + 1;
      }
      pxVar2 = local_38 + len_00;
      for (lVar1 = (long)local_2c; lVar1 != 0; lVar1 = lVar1 + -1) {
        *pxVar2 = *str2;
        str2 = str2 + 1;
        pxVar2 = pxVar2 + 1;
      }
      local_38[local_2c + len_00] = '\0';
    }
  }
  return local_38;
}

