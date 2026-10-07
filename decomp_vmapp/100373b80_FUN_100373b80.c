
void FUN_100373b80(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_10038e8c0(param_1 + 0x2b);
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x19];
    if (pvVar2 != pvVar1) {
      param_1[0x19] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10038e8c0(param_1 + 0x13);
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

