
void FUN_10039e8f0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x3088);
  if (pvVar1 != (void *)0x0) {
    FUN_100341950(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x3090);
  if (pvVar1 != (void *)0x0) {
    FUN_100341950(pvVar1);
    operator_delete(pvVar1);
  }
  if ((*(char *)(param_1 + 0x30d4) == '\0') && (*(void **)(param_1 + 0x30c8) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x30c8));
  }
  if ((*(char *)(param_1 + 0x30c4) == '\0') && (*(void **)(param_1 + 0x30b8) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x30b8));
    return;
  }
  return;
}

