
void FUN_1003adb70(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_100bbdc70;
  pvVar1 = (void *)param_1[0x38];
  if (pvVar1 != (void *)0x0) {
    FUN_1003aaf40(pvVar1);
    operator_delete(pvVar1);
  }
  puVar4 = (undefined8 *)param_1[0x39];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    *puVar4 = 0;
    pvVar1 = (void *)param_1[0x39];
    if (pvVar1 != (void *)0x0) {
      FUN_1003aaf40(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[0x39] = puVar2;
    puVar4 = puVar2;
  }
  pvVar1 = (void *)param_1[0x3a];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x3b];
    if (pvVar3 != pvVar1) {
      param_1[0x3b] = (~((long)pvVar3 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar1);
  }
  FUN_1003abfe0(param_1);
  return;
}

