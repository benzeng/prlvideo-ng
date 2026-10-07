
long FUN_004103d4(void)

{
  int iVar1;
  long local_20;
  timespec local_18;
  
  iVar1 = clock_gettime(1,&local_18);
  if (iVar1 == 0) {
    local_20 = local_18.tv_sec * 1000000 + local_18.tv_nsec / 1000;
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

