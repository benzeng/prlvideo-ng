
void FUN_1004a9d10(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_10044e1e0();
  *param_1 = &PTR_FUN_102215f50;
  param_1[2] = &PTR_FUN_102216158;
  pvVar1 = operator_new(200);
  param_1[7] = pvVar1;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_1004aafb0(pvVar1,param_1);
  return;
}

