
void FUN_1005209c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100bc4ce8;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      FUN_10051f430(pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
  }
  FUN_1004c0680(param_1);
  return;
}

