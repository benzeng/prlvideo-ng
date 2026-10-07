
void FUN_100351dd0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bbbea0;
  pvVar1 = (void *)param_1[0x2c];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2d];
    if (pvVar2 != pvVar1) {
      param_1[0x2d] =
           (void *)(~((ulong)((long)pvVar2 + (-3 - (long)pvVar1)) / 3) * 3 + (long)pvVar2);
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x29];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x2a];
    if (pvVar2 != pvVar1) {
      param_1[0x2a] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x26];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x27];
    if (pvVar2 != pvVar1) {
      param_1[0x27] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x23];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x24];
    if (pvVar2 != pvVar1) {
      param_1[0x24] = (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10039fa60(param_1);
  return;
}

