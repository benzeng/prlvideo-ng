
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

char ** ___xmlParserVersion(void)

{
  int iVar1;
  xmlGlobalStatePtr local_10;
  
  iVar1 = _xmlIsMainThread();
  if (iVar1 == 0) {
    local_10 = _xmlGetGlobalState();
  }
  else {
    local_10 = (xmlGlobalStatePtr)&_xmlParserVersion;
  }
  return &local_10->xmlParserVersion;
}

