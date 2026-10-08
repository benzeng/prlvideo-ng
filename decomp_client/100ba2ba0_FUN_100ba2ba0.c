
void * FUN_100ba2ba0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2 + 1);
  if (pvVar1 != (void *)0x0) {
    _memcpy(pvVar1,param_1,param_2);
    *(undefined1 *)((long)pvVar1 + param_2) = 0;
  }
  return pvVar1;
}

