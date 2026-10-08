
void FUN_100ab4630(pthread_mutex_t *param_1)

{
  param_1[1].__opaque[0x30] = '\0';
  param_1[1].__opaque[0x31] = '\0';
  param_1[1].__opaque[0x32] = '\0';
  param_1[1].__opaque[0x33] = '\0';
  param_1[1].__opaque[0x34] = '\0';
  param_1[1].__opaque[0x35] = '\0';
  param_1[1].__opaque[0x36] = '\0';
  param_1[1].__opaque[0x37] = '\0';
  param_1[1].__opaque[0x28] = '\0';
  param_1[1].__opaque[0x29] = '\0';
  param_1[1].__opaque[0x2a] = '\0';
  param_1[1].__opaque[0x2b] = '\0';
  param_1[1].__opaque[0x2c] = '\0';
  param_1[1].__opaque[0x2d] = '\0';
  param_1[1].__opaque[0x2e] = '\0';
  param_1[1].__opaque[0x2f] = '\0';
  _pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 1),(pthread_condattr_t *)0x0);
  return;
}

