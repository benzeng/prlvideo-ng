
void FUN_100a9f0a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_102281ab8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100a6a430(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

