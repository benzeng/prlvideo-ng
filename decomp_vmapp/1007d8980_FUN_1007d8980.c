
void FUN_1007d8980(pthread_mutex_t *param_1,long param_2)

{
  timespec local_38;
  timeval local_28;
  
  _gettimeofday(&local_28,(void *)0x0);
  local_38.tv_nsec = (param_2 * 1000 + (long)local_28.tv_usec) * 1000;
  local_38.tv_sec = local_38.tv_nsec / 1000000000 + local_28.tv_sec;
  local_38.tv_nsec = local_38.tv_nsec % 1000000000;
  _pthread_cond_timedwait((pthread_cond_t *)(param_1 + 1),param_1,&local_38);
  return;
}

