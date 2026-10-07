
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlGlobalStatePtr _xmlGetGlobalState(void)

{
  xmlGlobalStatePtr local_20;
  
  if (DAT_1011116c0 == 0) {
    local_20 = (xmlGlobalStatePtr)0x0;
  }
  else {
    _pthread_once((pthread_once_t *)&DAT_1011116d0,FUN_1001d6626);
    local_20 = _pthread_getspecific(DAT_1011b8788);
    if (local_20 == (xmlGlobalStatePtr)0x0) {
      local_20 = (xmlGlobalStatePtr)FUN_1001d6493();
      _pthread_setspecific(DAT_1011b8788,local_20);
    }
  }
  return local_20;
}

