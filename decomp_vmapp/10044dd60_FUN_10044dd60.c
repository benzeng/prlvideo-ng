
undefined8 FUN_10044dd60(uint *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  if (*param_1 == param_2) {
    pvVar1 = *(void **)(param_1 + 4);
  }
  else {
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      _free(*(void **)(param_1 + 4));
    }
    pvVar1 = _malloc(((ulong)param_2 * 3 + 2 & 0xffffffff) << 2);
    *(void **)(param_1 + 4) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0xffffff4c;
    }
    *(ulong *)(param_1 + 6) = (long)pvVar1 + (ulong)param_2 * 4 + 8;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  ___bzero(pvVar1,(ulong)(param_2 + 2) << 2);
  FUN_10045b7c0(param_1 + 0x12);
  return 0;
}

