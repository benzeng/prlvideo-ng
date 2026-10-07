
void FUN_1003aceb0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bbdb80;
  pvVar1 = (void *)param_1[0x39];
  if (pvVar1 != (void *)0x0) {
    FUN_1003aaf40(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x3a];
  if (pvVar1 != (void *)0x0) {
    FUN_1003aaf40(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x3c];
  if (pvVar1 != (void *)0x0) {
    FUN_1003aaf40(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_1003abfe0(param_1);
  return;
}

