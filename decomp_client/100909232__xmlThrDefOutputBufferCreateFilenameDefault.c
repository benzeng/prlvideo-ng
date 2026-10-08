
xmlOutputBufferCreateFilenameFunc
_xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func)

{
  xmlOutputBufferCreateFilenameFunc local_10;
  
  _xmlMutexLock(DAT_1023134a8);
  local_10 = DAT_1023134e0;
  if (DAT_1023134e0 == (xmlOutputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlOutputBufferCreateFilename;
  }
  DAT_1023134e0 = func;
  _xmlMutexUnlock(DAT_1023134a8);
  return local_10;
}

