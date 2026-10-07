
undefined8 FUN_1000d6740(long param_1,uint param_2)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  pvVar1 = operator_new__((ulong)param_2);
  *(void **)(param_1 + 0x18) = pvVar1;
  ___bzero(pvVar1,(ulong)param_2);
  *(uint *)(param_1 + 0x20) = param_2;
  return 1;
}

