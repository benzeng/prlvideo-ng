
undefined8 FUN_1007266d0(long *param_1,size_t param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if ((param_1[2] == 0) && (pvVar2 == (void *)0x0)) {
    pvVar2 = _malloc(param_2);
    *param_1 = (long)pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[2] = param_2;
      param_1[1] = (long)pvVar2;
      return 0;
    }
  }
  else {
    lVar1 = param_1[1];
    pvVar3 = _realloc(pvVar2,param_1[2] + param_2);
    if (pvVar3 != (void *)0x0) {
      param_1[2] = param_1[2] + param_2;
      if (pvVar3 == (void *)*param_1) {
        return 0;
      }
      *param_1 = (long)pvVar3;
      param_1[1] = (long)pvVar3 + (lVar1 - (long)pvVar2);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 1;
  return 0xffffffff;
}

