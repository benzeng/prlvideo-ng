
void FUN_0040f99c(void *param_1,int param_2)

{
  int __fd;
  
  __fd = FUN_0040f7c0();
  if (__fd != -1) {
    write(__fd,param_1,(long)param_2);
  }
  return;
}

