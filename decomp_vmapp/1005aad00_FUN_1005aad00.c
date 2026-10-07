
void FUN_1005aad00(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1005ab5b0(param_1);
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    pvVar1 = *(void **)(param_1 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FUN_1005b51c0(pvVar1,*(undefined8 *)((long)pvVar1 + 8));
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

