
xmlOutputBufferCreateFilenameFunc
_xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func)

{
  xmlOutputBufferCreateFilenameFunc local_10;
  
  _xmlMutexLock(DAT_1011b8728);
  local_10 = DAT_1011b8760;
  if (DAT_1011b8760 == (xmlOutputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlOutputBufferCreateFilename;
  }
  DAT_1011b8760 = func;
  _xmlMutexUnlock(DAT_1011b8728);
  return local_10;
}

