
void FUN_1003f8800(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101119bd0;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1003f8740(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

