
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferCreateFilenameFunc
_xmlParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func)

{
  xmlParserInputBufferCreateFilenameFunc *ppxVar1;
  xmlParserInputBufferCreateFilenameFunc local_10;
  
  ppxVar1 = ___xmlParserInputBufferCreateFilenameValue();
  local_10 = *ppxVar1;
  if (local_10 == (xmlParserInputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlParserInputBufferCreateFilename;
  }
  ppxVar1 = ___xmlParserInputBufferCreateFilenameValue();
  *ppxVar1 = func;
  return local_10;
}

