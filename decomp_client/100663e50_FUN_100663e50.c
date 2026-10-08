
void FUN_100663e50(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_10063f400(param_1,param_2,9,0);
  *param_1 = &PTR_FUN_102223a50;
  pvVar1 = operator_new(0x40);
  param_1[9] = pvVar1;
  param_1[10] = PTR_shared_null_1021e1288;
  FUN_100663f00(param_1);
  return;
}

