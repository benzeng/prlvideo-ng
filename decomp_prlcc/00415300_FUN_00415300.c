
undefined8 FUN_00415300(char *param_1)

{
  int __fd;
  undefined8 uVar1;
  
  __fd = open64(param_1,0,0);
  uVar1 = FUN_004151d0(__fd);
  if (-1 < __fd) {
    close(__fd);
  }
  return uVar1;
}

