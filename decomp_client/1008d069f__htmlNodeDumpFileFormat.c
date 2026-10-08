
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _htmlNodeDumpFileFormat(FILE *out,xmlDocPtr doc,xmlNodePtr cur,char *encoding,int format)

{
  xmlCharEncoding xVar1;
  xmlOutputBufferPtr buf;
  int local_50;
  xmlCharEncodingHandlerPtr local_18;
  
  local_18 = (xmlCharEncodingHandlerPtr)0x0;
  _xmlInitParser();
  if (((encoding != (char *)0x0) &&
      (xVar1 = _xmlParseCharEncoding(encoding), xVar1 != XML_CHAR_ENCODING_UTF8)) &&
     (local_18 = _xmlFindCharEncodingHandler(encoding), local_18 == (xmlCharEncodingHandlerPtr)0x0))
  {
    return -1;
  }
  if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
    local_18 = _xmlFindCharEncodingHandler("HTML");
  }
  if (local_18 == (xmlCharEncodingHandlerPtr)0x0) {
    local_18 = _xmlFindCharEncodingHandler("ascii");
  }
  buf = _xmlOutputBufferCreateFile(out,local_18);
  if (buf == (xmlOutputBufferPtr)0x0) {
    local_50 = 0;
  }
  else {
    _htmlNodeDumpFormatOutput(buf,doc,cur,encoding,format);
    local_50 = _xmlOutputBufferClose(buf);
  }
  return local_50;
}

