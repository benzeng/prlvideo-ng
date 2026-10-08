
void FUN_100aaf5d0(pthread_mutex_t *param_1)

{
  uint uVar1;
  
  _pthread_mutex_lock(param_1);
  uVar1 = *(uint *)(param_1[1].__opaque + 0x28);
  if (-1 < (int)uVar1) {
    *(uint *)(param_1[1].__opaque + 0x28) = uVar1 - 2;
    if ((uVar1 & 1) == 0) {
      _pthread_cond_broadcast((pthread_cond_t *)(param_1 + 1));
    }
    else {
      _pthread_cond_signal((pthread_cond_t *)(param_1 + 1));
    }
  }
  _pthread_mutex_unlock(param_1);
  return;
}

