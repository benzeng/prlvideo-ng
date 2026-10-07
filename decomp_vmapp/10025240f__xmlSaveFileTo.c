
int _xmlSaveFileTo(xmlOutputBufferPtr buf,xmlDocPtr cur,char *encoding)

{
  int local_d4;
  undefined1 local_b8 [24];
  char *local_a0;
  xmlOutputBufferPtr local_90;
  xmlDocPtr local_88;
  undefined4 local_7c;
  undefined4 local_78;
  
  if (buf == (xmlOutputBufferPtr)0x0) {
    local_d4 = -1;
  }
  else if (cur == (xmlDocPtr)0x0) {
    _xmlOutputBufferClose(buf);
    local_d4 = -1;
  }
  else {
    _memset(local_b8,0,0xa0);
    local_7c = 0;
    local_78 = 0;
    local_a0 = encoding;
    local_90 = buf;
    local_88 = cur;
    FUN_10024ea4e(local_b8);
    FUN_10024fafc(local_b8,cur);
    local_d4 = _xmlOutputBufferClose(buf);
  }
  return local_d4;
}

