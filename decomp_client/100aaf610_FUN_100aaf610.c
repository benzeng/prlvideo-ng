
void FUN_100aaf610(pthread_mutex_t *param_1)

{
  _pthread_mutex_lock(param_1);
  *(uint *)(param_1[1].__opaque + 0x28) = *(uint *)(param_1[1].__opaque + 0x28) & 1;
  _pthread_mutex_unlock(param_1);
  return;
}

