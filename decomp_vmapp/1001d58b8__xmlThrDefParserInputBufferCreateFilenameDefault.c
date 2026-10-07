
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferCreateFilenameFunc
_xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func)

{
  xmlParserInputBufferCreateFilenameFunc local_10;
  
  _xmlMutexLock(DAT_1011b8728);
  local_10 = DAT_1011b8758;
  if (DAT_1011b8758 == (xmlParserInputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlParserInputBufferCreateFilename;
  }
  DAT_1011b8758 = func;
  _xmlMutexUnlock(DAT_1011b8728);
  return local_10;
}

