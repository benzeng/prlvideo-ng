
void FUN_10039f8f0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xb];
    if (pvVar2 != pvVar1) {
      param_1[0xb] = (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[8];
    if (pvVar2 != pvVar1) {
      param_1[8] = (void *)((long)pvVar2 +
                           ~((ulong)((long)pvVar2 + (-0x14 - (long)pvVar1)) / 0x14) * 0x14);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[5];
    if (pvVar2 != pvVar1) {
      param_1[5] = (void *)((long)pvVar2 +
                           ~((ulong)((long)pvVar2 + (-0x14 - (long)pvVar1)) / 0x14) * 0x14);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != pvVar1) {
      param_1[1] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

