
undefined8 FUN_100b30090(long param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  _free(*(void **)(param_1 + 0x20));
  pvVar1 = _malloc((ulong)param_3);
  *(void **)(param_1 + 0x20) = pvVar1;
  uVar2 = 0x80000002;
  if (pvVar1 != (void *)0x0) {
    _memcpy(pvVar1,param_2,(ulong)param_3);
    *(uint *)(param_1 + 0x18) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}

