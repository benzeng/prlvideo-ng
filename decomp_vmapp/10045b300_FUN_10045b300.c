
undefined8 FUN_10045b300(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  size_t sVar2;
  
  if (*param_1 == param_2) {
    pvVar1 = *(void **)(param_1 + 4);
    sVar2 = (ulong)(param_2 + 2) << 2;
  }
  else {
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      _free(*(void **)(param_1 + 4));
    }
    sVar2 = (ulong)(param_2 + 2) << 2;
    pvVar1 = _malloc(sVar2);
    *(void **)(param_1 + 4) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0xffffff6c;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  ___bzero(pvVar1,sVar2);
  FUN_10045b7c0(param_1 + 0x10);
  return 0;
}

