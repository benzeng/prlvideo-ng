
void FUN_10040c820(long param_1,int param_2)

{
  void *pvVar1;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x50));
  }
  *(int *)(param_1 + 0x58) = param_2;
  pvVar1 = operator_new__((ulong)(uint)(param_2 * *(int *)(param_1 + 0x20)));
  *(void **)(param_1 + 0x50) = pvVar1;
  return;
}

