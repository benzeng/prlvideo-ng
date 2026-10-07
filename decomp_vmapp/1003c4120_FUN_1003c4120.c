
void FUN_1003c4120(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_1003c4120(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

