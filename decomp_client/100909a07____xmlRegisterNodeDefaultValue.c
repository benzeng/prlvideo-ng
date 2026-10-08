
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlRegisterNodeFunc * ___xmlRegisterNodeDefaultValue(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  xmlRegisterNodeFunc *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlRegisterNodeDefaultValue;
  }
  else {
    local_10 = (xmlRegisterNodeFunc *)&_xmlRegisterNodeDefaultValue;
  }
  return local_10;
}

