
void FUN_100ab48e0(pthread_mutex_t *param_1)

{
  long lVar1;
  
  _pthread_mutex_lock(param_1);
  lVar1 = *(long *)(param_1[1].__opaque + 0x28);
  *(long *)(param_1[1].__opaque + 0x30) = lVar1;
  if (lVar1 != 0) {
    _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 1));
  }
  _pthread_mutex_unlock(param_1);
  return;
}

