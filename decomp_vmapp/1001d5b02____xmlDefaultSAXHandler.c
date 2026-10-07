
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlSAXHandlerV1 * ___xmlDefaultSAXHandler(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlSAXHandlerV1 *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlDefaultSAXHandler;
  }
  else {
    local_10 = (xmlSAXHandlerV1 *)&_xmlDefaultSAXHandler;
  }
  return local_10;
}

