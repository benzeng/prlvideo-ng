
long * FUN_100ab4bb0(long *param_1)

{
  timeval local_20;
  
  _gettimeofday(&local_20,(void *)0x0);
  *param_1 = (long)(local_20.tv_usec / 1000) + local_20.tv_sec * 1000;
  return param_1;
}

