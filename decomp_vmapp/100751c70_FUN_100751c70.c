
void FUN_100751c70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10119ea28;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_10074fa30(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

