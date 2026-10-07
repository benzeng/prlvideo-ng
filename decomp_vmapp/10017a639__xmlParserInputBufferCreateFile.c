
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr _xmlParserInputBufferCreateFile(FILE *file,xmlCharEncoding enc)

{
  xmlParserInputBufferPtr local_30;
  
  if (DAT_1011b7724 == 0) {
    _xmlRegisterDefaultInputCallbacks();
  }
  if (file == (FILE *)0x0) {
    local_30 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    local_30 = _xmlAllocParserInputBuffer(enc);
    if (local_30 != (xmlParserInputBufferPtr)0x0) {
      local_30->context = file;
      local_30->readcallback = _xmlFileRead;
      local_30->closecallback = FUN_100178755;
    }
  }
  return local_30;
}

