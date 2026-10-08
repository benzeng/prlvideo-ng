
void FUN_1000f8230(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10226d4b8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1000e6210(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

