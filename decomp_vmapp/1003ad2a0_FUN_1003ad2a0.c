
void FUN_1003ad2a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bbdbd0;
  pvVar1 = (void *)param_1[0x38];
  if (pvVar1 != (void *)0x0) {
    FUN_1003aaf40(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_1003abfe0(param_1);
  return;
}

