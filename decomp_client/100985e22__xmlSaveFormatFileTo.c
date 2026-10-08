
int _xmlSaveFormatFileTo(xmlOutputBufferPtr buf,xmlDocPtr cur,char *encoding,int format)

{
  int local_d8;
  undefined1 local_b8 [24];
  char *local_a0;
  xmlOutputBufferPtr local_90;
  xmlDocPtr local_88;
  undefined4 local_7c;
  int local_78;
  
  if (buf == (xmlOutputBufferPtr)0x0) {
    local_d8 = -1;
  }
  else if ((cur == (xmlDocPtr)0x0) ||
          ((cur->type != XML_DOCUMENT_NODE && (cur->type != XML_HTML_DOCUMENT_NODE)))) {
    _xmlOutputBufferClose(buf);
    local_d8 = -1;
  }
  else {
    _memset(local_b8,0,0xa0);
    local_7c = 0;
    local_a0 = encoding;
    local_90 = buf;
    local_88 = cur;
    local_78 = format;
    FUN_100982376(local_b8);
    FUN_100983424(local_b8,cur);
    local_d8 = _xmlOutputBufferClose(buf);
  }
  return local_d8;
}

