
void FUN_100ccf8d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10230f430;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100ccf810(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

