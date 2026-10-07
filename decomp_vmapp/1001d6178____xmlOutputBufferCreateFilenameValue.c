
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlOutputBufferCreateFilenameFunc * ___xmlOutputBufferCreateFilenameValue(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlOutputBufferCreateFilenameFunc *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlOutputBufferCreateFilenameValue;
  }
  else {
    local_10 = (xmlOutputBufferCreateFilenameFunc *)&_xmlOutputBufferCreateFilenameValue;
  }
  return local_10;
}

