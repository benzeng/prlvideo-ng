
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlGlobalStatePtr _xmlGetGlobalState(void)

{
  xmlGlobalStatePtr local_20;
  
  if (DAT_1022797c0 == 0) {
    local_20 = (xmlGlobalStatePtr)0x0;
  }
  else {
    _pthread_once((pthread_once_t *)&DAT_1022797d0,FUN_100909f4e);
    local_20 = _pthread_getspecific(DAT_102313508);
    if (local_20 == (xmlGlobalStatePtr)0x0) {
      local_20 = (xmlGlobalStatePtr)FUN_100909dbb();
      _pthread_setspecific(DAT_102313508,local_20);
    }
  }
  return local_20;
}

