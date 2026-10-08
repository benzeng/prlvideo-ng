
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlMutexPtr _xmlNewMutex(void)

{
  undefined8 local_20;
  
  local_20 = _malloc(0x40);
  if (local_20 == (pthread_mutex_t *)0x0) {
    local_20 = (pthread_mutex_t *)0x0;
  }
  else if (DAT_1022797c0 != 0) {
    _pthread_mutex_init(local_20,(pthread_mutexattr_t *)0x0);
  }
  return (xmlMutexPtr)local_20;
}

