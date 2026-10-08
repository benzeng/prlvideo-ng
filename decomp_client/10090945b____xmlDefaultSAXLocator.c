
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlSAXLocator * ___xmlDefaultSAXLocator(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlSAXLocator *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlDefaultSAXLocator;
  }
  else {
    local_10 = (xmlSAXLocator *)&_xmlDefaultSAXLocator;
  }
  return local_10;
}

