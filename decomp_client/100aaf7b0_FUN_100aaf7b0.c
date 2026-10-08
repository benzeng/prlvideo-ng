
void FUN_100aaf7b0(pthread_mutex_t *param_1,int param_2)

{
  _pthread_mutex_lock(param_1);
  *(int *)(param_1[1].__opaque + 0x28) = *(int *)(param_1[1].__opaque + 0x28) + param_2;
  if (*(int *)(param_1[1].__opaque + 0x28) == 1) {
    _pthread_cond_signal((pthread_cond_t *)(param_1 + 1));
  }
  else {
    _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 1));
  }
  _pthread_mutex_unlock(param_1);
  return;
}

