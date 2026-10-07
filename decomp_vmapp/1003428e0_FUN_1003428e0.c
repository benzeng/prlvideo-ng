
void FUN_1003428e0(long param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = *(void **)(param_1 + 8);
  iVar2 = *(int *)((long)pvVar1 + 0x80) + -1;
  *(int *)((long)pvVar1 + 0x80) = iVar2;
  if ((pvVar1 != (void *)0x0) && (iVar2 == 0)) {
    FUN_10032d8f0(pvVar1);
    operator_delete(pvVar1);
  }
  *(long *)(param_1 + 8) = param_2;
  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  return;
}

