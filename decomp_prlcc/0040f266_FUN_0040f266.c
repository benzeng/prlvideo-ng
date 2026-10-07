
int FUN_0040f266(char *param_1)

{
  int iVar1;
  tm *__tp;
  size_t sVar2;
  tm local_68;
  __time_t local_30;
  timeval local_28;
  int local_c;
  
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  local_30 = local_28.tv_sec;
  __tp = localtime_r(&local_30,&local_68);
  sVar2 = strftime(param_1,0x80,"%m-%d %H:%M:%S",__tp);
  local_c = (int)sVar2;
  iVar1 = sprintf(param_1 + local_c,".%03d ",local_28.tv_usec / 1000 & 0xffffffff);
  return local_c + iVar1;
}

