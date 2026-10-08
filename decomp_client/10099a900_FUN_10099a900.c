
void FUN_10099a900(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  FUN_1009986a0(param_1,param_2,9,1,param_3);
  *param_1 = &PTR_FUN_102234a00;
  pvVar1 = operator_new(0x90);
  param_1[10] = pvVar1;
  param_1[0xb] = 0;
  FUN_10099a970(param_1);
  return;
}

