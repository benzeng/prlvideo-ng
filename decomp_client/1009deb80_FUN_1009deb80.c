
void FUN_1009deb80(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10227e3b8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1009debe0(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

