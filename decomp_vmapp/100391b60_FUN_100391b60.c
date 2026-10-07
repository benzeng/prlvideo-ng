
void FUN_100391b60(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bbd280;
  pvVar1 = (void *)param_1[0x30];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x31];
    if (pvVar2 != pvVar1) {
      param_1[0x31] =
           (void *)(~((ulong)((long)pvVar2 + (-3 - (long)pvVar1)) / 3) * 3 + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x2d];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2e];
    if (pvVar2 != pvVar1) {
      param_1[0x2e] =
           (void *)(~((ulong)((long)pvVar2 + (-3 - (long)pvVar1)) / 3) * 3 + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x2a];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2b];
    if (pvVar2 != pvVar1) {
      param_1[0x2b] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x27];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x28];
    if (pvVar2 != pvVar1) {
      param_1[0x28] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x24];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x25];
    if (pvVar2 != pvVar1) {
      param_1[0x25] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x21];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x22];
    if (pvVar2 != pvVar1) {
      param_1[0x22] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10039fa60(param_1);
  return;
}

