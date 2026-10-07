
void FUN_1000f8310(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100ba90a0;
  pvVar1 = (void *)param_1[0x179f];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x17a0];
    if (pvVar2 != pvVar1) {
      param_1[0x17a0] =
           (void *)((long)pvVar2 + ~((ulong)((long)pvVar2 + (-0x18 - (long)pvVar1)) / 0x18) * 0x18);
    }
    operator_delete(pvVar1);
  }
  FUN_1000f8100(param_1);
  operator_delete(param_1);
  return;
}

