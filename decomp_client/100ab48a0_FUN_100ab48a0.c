
void FUN_100ab48a0(pthread_mutex_t *param_1)

{
  ulong uVar1;
  
  _pthread_mutex_lock(param_1);
  uVar1 = *(long *)(param_1[1].__opaque + 0x30) + 1;
  if (*(ulong *)(param_1[1].__opaque + 0x28) <= uVar1) {
    uVar1 = *(ulong *)(param_1[1].__opaque + 0x28);
  }
  *(ulong *)(param_1[1].__opaque + 0x30) = uVar1;
  if (uVar1 != 0) {
    _pthread_cond_signal((pthread_cond_t *)(param_1 + 1));
  }
  _pthread_mutex_unlock(param_1);
  return;
}

