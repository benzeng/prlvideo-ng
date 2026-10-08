
void FUN_100b3bed0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1022cf3a0;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100b3bf80(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

