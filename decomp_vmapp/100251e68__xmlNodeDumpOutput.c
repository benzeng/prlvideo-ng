
void _xmlNodeDumpOutput(xmlOutputBufferPtr buf,xmlDocPtr doc,xmlNodePtr cur,int level,int format,
                       char *encoding)

{
  char *local_e0;
  undefined1 local_b8 [24];
  char *local_a0;
  xmlOutputBufferPtr local_90;
  xmlDocPtr local_88;
  int local_7c;
  int local_78;
  xmlDtdPtr local_18;
  int local_c;
  
  local_c = 0;
  _xmlInitParser();
  if ((buf != (xmlOutputBufferPtr)0x0) && (cur != (xmlNodePtr)0x0)) {
    local_e0 = encoding;
    if (encoding == (char *)0x0) {
      local_e0 = "UTF-8";
    }
    _memset(local_b8,0,0xa0);
    local_a0 = local_e0;
    local_90 = buf;
    local_88 = doc;
    local_7c = level;
    local_78 = format;
    FUN_10024ea4e(local_b8);
    local_18 = _xmlGetIntSubset(doc);
    if (local_18 != (xmlDtdPtr)0x0) {
      local_c = _xmlIsXHTML(local_18->SystemID,local_18->ExternalID);
      if (local_c < 0) {
        local_c = 0;
      }
    }
    if (local_c == 0) {
      FUN_10024f355(local_b8,cur);
    }
    else {
      FUN_10025056d(local_b8,cur);
    }
  }
  return;
}

