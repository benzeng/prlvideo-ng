
void FUN_100ac1f30(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[1] != pvVar1) {
      param_1[1] = pvVar1;
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

