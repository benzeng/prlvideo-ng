
void * FUN_10018f5c0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x100);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1007c7cd0(pvVar1,param_1);
    *(void **)(param_1 + 0x100) = pvVar1;
  }
  return pvVar1;
}

