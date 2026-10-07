
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlDeregisterNodeFunc * ___xmlDeregisterNodeDefaultValue(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlDeregisterNodeFunc *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlDeregisterNodeDefaultValue;
  }
  else {
    local_10 = (xmlDeregisterNodeFunc *)&_xmlDeregisterNodeDefaultValue;
  }
  return local_10;
}

