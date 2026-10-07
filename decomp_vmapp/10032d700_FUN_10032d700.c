
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032d700(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_10035fd50();
  _DAT_1011c8128 = _DAT_1011c8128 + -1;
  pvVar1 = *(void **)(param_1 + 0xb8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0xc0);
    if (pvVar2 != pvVar1) {
      *(ulong *)(param_1 + 0xc0) =
           (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x90);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x98);
    if (pvVar2 != pvVar1) {
      *(ulong *)(param_1 + 0x98) =
           (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10032f000(param_1 + 0x68,*(undefined8 *)(param_1 + 0x70));
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x48);
    if (pvVar2 != pvVar1) {
      *(ulong *)(param_1 + 0x48) =
           (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x30);
    if (pvVar2 != pvVar1) {
      *(void **)(param_1 + 0x30) =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0xc - (long)pvVar1)) / 0xc) * 0xc);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

