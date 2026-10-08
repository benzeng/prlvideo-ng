
long FUN_100a68800(void)

{
  timeval local_18;
  
  _gettimeofday(&local_18,(void *)0x0);
  return local_18.tv_sec * 1000 + (ulong)(long)local_18.tv_usec / 1000;
}

