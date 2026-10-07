
void FUN_10035d980(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bbbf80;
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_10035baa0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xf];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x10];
    if (pvVar2 != pvVar1) {
      param_1[0x10] =
           (~((long)pvVar2 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xd];
    if (pvVar2 != pvVar1) {
      param_1[0xd] = (~((long)pvVar2 + (-0x10 - (long)pvVar1)) & 0xfffffffffffffff0U) + (long)pvVar2
      ;
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if ((void *)param_1[9] != pvVar1) {
    param_1[9] = pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

