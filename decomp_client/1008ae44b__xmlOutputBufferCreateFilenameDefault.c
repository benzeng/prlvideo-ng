
xmlOutputBufferCreateFilenameFunc
_xmlOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func)

{
  xmlOutputBufferCreateFilenameFunc *ppxVar1;
  xmlOutputBufferCreateFilenameFunc local_10;
  
  ppxVar1 = ___xmlOutputBufferCreateFilenameValue();
  local_10 = *ppxVar1;
  if (local_10 == (xmlOutputBufferCreateFilenameFunc)0x0) {
    local_10 = ___xmlOutputBufferCreateFilename;
  }
  ppxVar1 = ___xmlOutputBufferCreateFilenameValue();
  *ppxVar1 = func;
  return local_10;
}

