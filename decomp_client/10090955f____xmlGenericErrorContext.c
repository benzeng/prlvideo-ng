
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void ** ___xmlGenericErrorContext(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  void **local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlGenericErrorContext;
  }
  else {
    local_10 = (void **)&_xmlGenericErrorContext;
  }
  return local_10;
}

