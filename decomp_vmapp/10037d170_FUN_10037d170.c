
void FUN_10037d170(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bbc290;
  pvVar1 = (void *)param_1[0x20];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x21];
    if (pvVar2 != pvVar1) {
      param_1[0x21] =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0xc - (long)pvVar1)) / 0xc) * 0xc);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1d];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x1e];
    if (pvVar2 != pvVar1) {
      param_1[0x1e] =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0xc - (long)pvVar1)) / 0xc) * 0xc);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x1b];
    if (pvVar2 != pvVar1) {
      param_1[0x1b] =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0xc - (long)pvVar1)) / 0xc) * 0xc);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x18];
    if (pvVar2 != pvVar1) {
      param_1[0x18] =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0xc - (long)pvVar1)) / 0xc) * 0xc);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x15];
    if (pvVar2 != pvVar1) {
      param_1[0x15] =
           (~((long)pvVar2 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x12];
    if (pvVar2 != pvVar1) {
      param_1[0x12] = (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10036cfe0(param_1);
  return;
}

