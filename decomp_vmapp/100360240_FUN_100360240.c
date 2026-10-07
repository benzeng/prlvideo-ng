
void FUN_100360240(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bbbfb8;
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete((void *)param_1[0x17]);
  }
  pvVar1 = (void *)param_1[0x16];
  if (pvVar1 != (void *)0x0) {
    FUN_10037e1e0(pvVar1);
    operator_delete(pvVar1);
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    FUN_10036e2c0(pvVar1);
    operator_delete(pvVar1);
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete((void *)param_1[0x14]);
  }
  pvVar1 = (void *)param_1[0x13];
  if (pvVar1 != (void *)0x0) {
    FUN_100351670(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  pvVar1 = (void *)param_1[0x19];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x1a];
    if (pvVar2 != pvVar1) {
      param_1[0x1a] = (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    operator_delete(pvVar1);
  }
  FUN_10035d980(param_1);
  return;
}

