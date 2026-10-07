
void FUN_1007eaf10(byte *param_1)

{
  if (((ulong)*(pthread_mutex_t **)param_1 & 1) == 0) {
    _pthread_mutex_unlock(*(pthread_mutex_t **)param_1);
    *param_1 = *param_1 | 1;
  }
  return;
}

