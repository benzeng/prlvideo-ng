
void FUN_1005f8b50(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_1005ecd90(param_1,param_2,0x15,0);
  *param_1 = &PTR_FUN_10221ff30;
  pvVar1 = operator_new(0x80);
  FUN_1005f2a20(pvVar1,param_1,param_1);
  param_1[8] = pvVar1;
  return;
}

