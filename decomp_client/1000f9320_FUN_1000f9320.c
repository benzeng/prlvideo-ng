
void FUN_1000f9320(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10226d520;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1000f9380(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

