
void FUN_10010b780(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10110d1e8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_10010b7e0(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

