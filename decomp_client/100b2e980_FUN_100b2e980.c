
void FUN_100b2e980(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1022cf2e8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100b367a0(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

