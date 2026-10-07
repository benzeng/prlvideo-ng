
void FUN_100517120(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bc4868;
  param_1[5] = &PTR_FUN_100bc48c0;
  FUN_100519360(DAT_1011c3698 + 0x10f0,0xb);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_100517fe0(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

