
void FUN_100a9e7a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1022819f0;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100a9e850(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

