
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _htmlSaveFileFormat(char *filename,xmlDocPtr cur,char *encoding,int format)

{
  xmlCharEncoding xVar1;
  xmlOutputBufferPtr buf;
  int local_48;
  xmlCharEncodingHandlerPtr local_18;
  
  local_18 = (xmlCharEncodingHandlerPtr)0x0;
  if ((cur == (xmlDocPtr)0x0) || (filename == (char *)0x0)) {
    return -1;
  }
  _xmlInitParser();
  if (encoding == (char *)0x0) {
    _htmlSetMetaEncoding(cur,(xmlChar *)"UTF-8");
  }
  else {
    xVar1 = _xmlParseCharEncoding(encoding);
    if (cur->charset != xVar1) {
      if (cur->charset != 1) {
        return -1;
      }
      local_18 = _xmlFindCharEncodingHandler(encoding);
      if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
        return -1;
      }
      _htmlSetMetaEncoding(cur,(xmlChar *)encoding);
    }
  }
  if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
    local_18 = _xmlFindCharEncodingHandler("HTML");
  }
  if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
    local_18 = _xmlFindCharEncodingHandler("ascii");
  }
  buf = _xmlOutputBufferCreateFilename(filename,local_18,0);
  if (buf == (xmlOutputBufferPtr)0x0) {
    local_48 = 0;
  }
  else {
    _htmlDocContentDumpFormatOutput(buf,cur,encoding,format);
    local_48 = _xmlOutputBufferClose(buf);
  }
  return local_48;
}

