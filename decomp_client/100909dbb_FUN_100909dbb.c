
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlGlobalStatePtr FUN_100909dbb(void)

{
  undefined8 local_20;
  
  local_20 = _malloc(0x3c0);
  if (local_20 == (xmlGlobalStatePtr)0x0) {
    local_20 = (xmlGlobalStatePtr)0x0;
  }
  else {
    _memset(local_20,0,0x3c0);
    _xmlInitializeGlobalState(local_20);
  }
  return local_20;
}

