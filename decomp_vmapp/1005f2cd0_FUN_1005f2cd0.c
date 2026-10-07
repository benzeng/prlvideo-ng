
void FUN_1005f2cd0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10111e358;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1005f2c50(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

