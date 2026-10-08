
void FUN_1005d27c0(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_1005eca00(param_1,param_2,0,0);
  *param_1 = &PTR_FUN_10221e7f0;
  param_1[10] = 0;
  pvVar1 = operator_new(0xa0);
  FUN_1005cf450(pvVar1,param_1);
  param_1[10] = pvVar1;
  return;
}

