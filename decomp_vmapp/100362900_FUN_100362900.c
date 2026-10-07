
void FUN_100362900(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bbbff0;
  pvVar1 = (void *)param_1[0x16];
  if (pvVar1 != (void *)0x0) {
    FUN_10036a140(pvVar1);
    operator_delete(pvVar1);
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  pvVar1 = (void *)param_1[0x17];
  if (pvVar1 != (void *)0x0) {
    FUN_100377410(pvVar1,0);
    if (*(int *)((long)pvVar1 + 8) != 0) {
      (*DAT_1011c5b78)();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    FUN_10039e9d0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x15];
  if (pvVar1 != (void *)0x0) {
    FUN_100351a60(pvVar1);
    operator_delete(pvVar1);
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete((void *)param_1[0x12]);
  }
  pvVar1 = (void *)param_1[0x18];
  if (pvVar1 != (void *)0x0) {
    FUN_10035ce70(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[0x17] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_10035d980(param_1);
  return;
}

