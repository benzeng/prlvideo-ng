
void FUN_100aaf710(pthread_mutex_t *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1[1].__opaque + 0x28) = param_2;
  _pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 1),(pthread_condattr_t *)0x0);
  return;
}

