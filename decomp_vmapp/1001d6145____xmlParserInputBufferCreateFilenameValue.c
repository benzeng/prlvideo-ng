
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferCreateFilenameFunc * ___xmlParserInputBufferCreateFilenameValue(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlParserInputBufferCreateFilenameFunc *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlParserInputBufferCreateFilenameValue;
  }
  else {
    local_10 = (xmlParserInputBufferCreateFilenameFunc *)&_xmlParserInputBufferCreateFilenameValue;
  }
  return local_10;
}

