
int FUN_0040f212(char *param_1)

{
  int __fd;
  
  __fd = open64(param_1,0x441,0x1b6);
  if (-1 < __fd) {
    fchmod(__fd,0x1b6);
  }
  return __fd;
}

