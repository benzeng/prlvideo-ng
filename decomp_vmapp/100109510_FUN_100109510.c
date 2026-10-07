
void FUN_100109510(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10110d008;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100107c30(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

