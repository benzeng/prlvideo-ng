
void FUN_1000b4ba0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x20);
    if (pvVar2 != pvVar1) {
      *(ulong *)(param_1 + 0x20) =
           (~((long)pvVar2 + (-0x40 - (long)pvVar1)) & 0xffffffffffffffc0U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

