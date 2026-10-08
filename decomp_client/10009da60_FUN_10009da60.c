
void FUN_10009da60(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_1000a0640(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

