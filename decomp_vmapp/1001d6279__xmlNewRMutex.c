
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlRMutexPtr _xmlNewRMutex(void)

{
  pthread_mutex_t *local_20;
  
  local_20 = _malloc(0x80);
  if (local_20 == (pthread_mutex_t *)0x0) {
    local_20 = (pthread_mutex_t *)0x0;
  }
  else if (DAT_1011116c0 != 0) {
    _pthread_mutex_init(local_20,(pthread_mutexattr_t *)0x0);
    *(undefined4 *)&local_20[1].__sig = 0;
    *(undefined4 *)((long)&local_20[1].__sig + 4) = 0;
    _pthread_cond_init((pthread_cond_t *)(local_20[1].__opaque + 8),(pthread_condattr_t *)0x0);
  }
  return (xmlRMutexPtr)local_20;
}

