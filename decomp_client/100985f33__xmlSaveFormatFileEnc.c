
int _xmlSaveFormatFileEnc(char *filename,xmlDocPtr cur,char *encoding,int format)

{
  int iVar1;
  int local_e8;
  xmlChar *local_e0;
  undefined1 local_c8 [24];
  xmlChar *local_b0;
  xmlOutputBufferPtr local_a0;
  xmlDocPtr local_98;
  undefined4 local_8c;
  int local_88;
  xmlOutputBufferPtr local_20;
  xmlCharEncodingHandlerPtr local_18;
  
  local_18 = (xmlCharEncodingHandlerPtr)0x0;
  if (cur == (xmlDocPtr)0x0) {
    local_e8 = -1;
  }
  else {
    local_e0 = (xmlChar *)encoding;
    if (encoding == (char *)0x0) {
      local_e0 = cur->encoding;
    }
    if ((local_e0 != (xmlChar *)0x0) &&
       (local_18 = _xmlFindCharEncodingHandler((char *)local_e0),
       local_18 == (xmlCharEncodingHandlerPtr)0x0)) {
      return -1;
    }
    if (cur->compression < 0) {
      iVar1 = _xmlGetCompressMode();
      cur->compression = iVar1;
    }
    local_20 = _xmlOutputBufferCreateFilename(filename,local_18,cur->compression);
    if (local_20 == (xmlOutputBufferPtr)0x0) {
      local_e8 = -1;
    }
    else {
      _memset(local_c8,0,0xa0);
      local_a0 = local_20;
      local_8c = 0;
      local_b0 = local_e0;
      local_98 = cur;
      local_88 = format;
      FUN_100982376(local_c8);
      FUN_100983424(local_c8,cur);
      local_e8 = _xmlOutputBufferClose(local_20);
    }
  }
  return local_e8;
}

