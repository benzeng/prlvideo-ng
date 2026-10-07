
void * FUN_10087d050(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    pvVar2 = (void *)0x0;
    if (sVar1 < 0x7fffffff) {
      pvVar2 = (void *)FUN_10081ddd0((int)sVar1 + 1,"buf_str.c",0x51);
      if (pvVar2 == (void *)0x0) {
        FUN_100887ce0(7,0x68,0x41,"buf_str.c",0x53);
        pvVar2 = (void *)0x0;
      }
      else {
        _memcpy(pvVar2,param_1,sVar1);
        *(undefined1 *)((long)pvVar2 + sVar1) = 0;
      }
    }
  }
  return pvVar2;
}

