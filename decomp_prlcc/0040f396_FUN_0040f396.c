
void FUN_0040f396(char *param_1,undefined8 param_2)

{
  int __fd;
  long lVar1;
  
  lVar1 = FUN_0040f16c();
  strncpy((char *)(lVar1 + 0x24),param_1,0x400);
  *(undefined1 *)(lVar1 + 0x423) = 0;
  snprintf((char *)(lVar1 + 0x424),0x400,"%s/%s",param_1,param_2);
  *(undefined1 *)(lVar1 + 0x823) = 0;
  __fd = *(int *)(lVar1 + 8);
  *(undefined4 *)(lVar1 + 8) = 0xffffffff;
  if (__fd != -1) {
    close(__fd);
  }
  return;
}

