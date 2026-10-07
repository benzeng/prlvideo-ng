
int _xmlDocFormatDump(FILE *f,xmlDocPtr cur,int format)

{
  int local_e0;
  undefined1 local_c8 [24];
  xmlChar *local_b0;
  xmlOutputBufferPtr local_a0;
  xmlDocPtr local_98;
  undefined4 local_8c;
  int local_88;
  xmlOutputBufferPtr local_28;
  xmlChar *local_20;
  xmlCharEncodingHandlerPtr local_18;
  
  local_18 = (xmlCharEncodingHandlerPtr)0x0;
  if (cur == (xmlDocPtr)0x0) {
    local_e0 = -1;
  }
  else {
    local_20 = cur->encoding;
    if (local_20 != (xmlChar *)0x0) {
      local_18 = _xmlFindCharEncodingHandler((char *)local_20);
      if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
        (*(code *)_xmlFree)(cur->encoding);
        cur->encoding = (xmlChar *)0x0;
      }
    }
    local_28 = _xmlOutputBufferCreateFile(f,local_18);
    if (local_28 == (xmlOutputBufferPtr)0x0) {
      local_e0 = -1;
    }
    else {
      _memset(local_c8,0,0xa0);
      local_a0 = local_28;
      local_8c = 0;
      local_b0 = local_20;
      local_98 = cur;
      local_88 = format;
      FUN_10024ea4e(local_c8);
      FUN_10024fafc(local_c8,cur);
      local_e0 = _xmlOutputBufferClose(local_28);
    }
  }
  return local_e0;
}

