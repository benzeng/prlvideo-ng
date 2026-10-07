
void FUN_1003c57b0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_1003c57b0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[5];
    if (pvVar2 != pvVar1) {
      param_1[5] = (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

