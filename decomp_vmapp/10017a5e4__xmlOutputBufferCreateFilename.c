
xmlOutputBufferPtr
_xmlOutputBufferCreateFilename(char *URI,xmlCharEncodingHandlerPtr encoder,int compression)

{
  xmlOutputBufferCreateFilenameFunc *ppxVar1;
  xmlOutputBufferPtr local_28;
  
  ppxVar1 = ___xmlOutputBufferCreateFilenameValue();
  if (*ppxVar1 == (xmlOutputBufferCreateFilenameFunc)0x0) {
    local_28 = ___xmlOutputBufferCreateFilename(URI,encoder,compression);
  }
  else {
    ppxVar1 = ___xmlOutputBufferCreateFilenameValue();
    local_28 = (**ppxVar1)(URI,encoder,compression);
  }
  return local_28;
}

