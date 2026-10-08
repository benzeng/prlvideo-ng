
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferCreateFilenameFunc
_xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func)

{
  xmlParserInputBufferCreateFilenameFunc local_10;
  
  _xmlMutexLock(DAT_1023134a8);
  local_10 = DAT_1023134d8;
  if (DAT_1023134d8 == (xmlParserInputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlParserInputBufferCreateFilename;
  }
  DAT_1023134d8 = func;
  _xmlMutexUnlock(DAT_1023134a8);
  return local_10;
}

