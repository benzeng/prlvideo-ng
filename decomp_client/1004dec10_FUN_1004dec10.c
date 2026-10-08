
void FUN_1004dec10(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_1004da2e0();
  *param_1 = &PTR_FUN_102218d80;
  param_1[2] = &PTR_FUN_102218fd0;
  pvVar1 = operator_new(0x90);
  param_1[9] = pvVar1;
  FUN_1004e14b0(pvVar1,param_1);
  FUN_1004de5f0(param_1,*(undefined8 *)(param_1[9] + 8));
  return;
}

