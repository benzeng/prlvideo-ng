
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlParserInputBufferCreateFilename(char *URI,xmlCharEncoding enc)

{
  xmlParserInputBufferCreateFilenameFunc *ppxVar1;
  xmlParserInputBufferPtr local_20;
  
  ppxVar1 = ___xmlParserInputBufferCreateFilenameValue();
  if (*ppxVar1 == (xmlParserInputBufferCreateFilenameFunc)0x0) {
    local_20 = ___xmlParserInputBufferCreateFilename(URI,enc);
  }
  else {
    ppxVar1 = ___xmlParserInputBufferCreateFilenameValue();
    local_20 = (**ppxVar1)(URI,enc);
  }
  return local_20;
}

