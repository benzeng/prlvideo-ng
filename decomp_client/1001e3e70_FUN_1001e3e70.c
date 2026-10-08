
void FUN_1001e3e70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_102271498;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1001e3ed0(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

