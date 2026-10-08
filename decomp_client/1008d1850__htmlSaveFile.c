
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _htmlSaveFile(char *filename,xmlDocPtr cur)

{
  xmlCharEncoding xVar1;
  xmlChar *name;
  xmlOutputBufferPtr buf;
  int local_3c;
  xmlCharEncodingHandlerPtr local_20;
  
  local_20 = (xmlCharEncodingHandlerPtr)0x0;
  if ((cur == (xmlDocPtr)0x0) || (filename == (char *)0x0)) {
    return -1;
  }
  _xmlInitParser();
  name = _htmlGetMetaEncoding(cur);
  if ((name != (xmlChar *)0x0) &&
     (xVar1 = _xmlParseCharEncoding((char *)name), cur->charset != xVar1)) {
    if (cur->charset != 1) {
      return -1;
    }
    local_20 = _xmlFindCharEncodingHandler((char *)name);
    if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
      return -1;
    }
  }
  if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
    local_20 = _xmlFindCharEncodingHandler("HTML");
  }
  if (local_20 == (xmlCharEncodingHandlerPtr)0x0) {
    local_20 = _xmlFindCharEncodingHandler("ascii");
  }
  buf = _xmlOutputBufferCreateFilename(filename,local_20,cur->compression);
  if (buf == (xmlOutputBufferPtr)0x0) {
    local_3c = 0;
  }
  else {
    _htmlDocContentDumpOutput(buf,cur,(char *)0x0);
    local_3c = _xmlOutputBufferClose(buf);
  }
  return local_3c;
}

