
void FUN_100798070(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1011a5978;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100796c70(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

