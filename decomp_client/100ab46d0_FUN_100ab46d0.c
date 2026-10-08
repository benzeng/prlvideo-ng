
void FUN_100ab46d0(pthread_mutex_t *param_1)

{
  _pthread_cond_destroy((pthread_cond_t *)(param_1 + 1));
  _pthread_mutex_destroy(param_1);
  return;
}

