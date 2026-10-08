
void FUN_10064e890(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_10063f400(param_1,param_2,4,0);
  *param_1 = &PTR_FUN_102223460;
  pvVar1 = operator_new(0xc0);
  param_1[9] = pvVar1;
  param_1[10] = PTR_shared_null_1021e15e8;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_10064e940(param_1);
  FUN_10064ede0(param_1);
  return;
}

