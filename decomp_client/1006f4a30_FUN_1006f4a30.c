
void FUN_1006f4a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  FUN_100380f70(param_1,param_3);
  *param_1 = &PTR_FUN_102226200;
  param_1[2] = &PTR_FUN_1022263f0;
  param_1[6] = &PTR_FUN_102226440;
  pvVar1 = operator_new(200);
  FUN_1006f3420(pvVar1,param_1,param_2,param_1);
  param_1[0xd] = pvVar1;
  FUN_1006f35e0(pvVar1);
  FUN_1006f3e80(param_1[0xd]);
  return;
}

