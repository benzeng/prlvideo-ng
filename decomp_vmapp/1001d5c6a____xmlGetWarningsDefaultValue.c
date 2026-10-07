
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int * ___xmlGetWarningsDefaultValue(void)

{
  int iVar1;
  xmlGlobalStatePtr pxVar2;
  int *local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    pxVar2 = _xmlGetGlobalState();
    local_10 = &pxVar2->xmlGetWarningsDefaultValue;
  }
  else {
    local_10 = (int *)&_xmlGetWarningsDefaultValue;
  }
  return local_10;
}

