
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlGenericErrorFunc * ___xmlGenericError(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlGenericErrorFunc *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlGenericError;
  }
  else {
    local_10 = (xmlGenericErrorFunc *)&_xmlGenericError;
  }
  return local_10;
}

