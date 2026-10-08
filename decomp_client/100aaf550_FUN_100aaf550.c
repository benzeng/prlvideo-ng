
void FUN_100aaf550(pthread_mutex_t *param_1,uint param_2,byte param_3)

{
  *(uint *)(param_1[1].__opaque + 0x28) = (param_2 & 0xff) + (uint)param_3 * -2;
  _pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 1),(pthread_condattr_t *)0x0);
  return;
}

