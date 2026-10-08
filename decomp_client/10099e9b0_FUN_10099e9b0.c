
void FUN_10099e9b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  FUN_10099e110(param_1,param_2,10,1,param_3);
  *param_1 = &PTR_FUN_102234ce0;
  pvVar1 = operator_new(0xd8);
  param_1[0xc] = pvVar1;
  *(undefined2 *)(param_1 + 0xd) = 0;
  FUN_10099ea60(param_1);
  return;
}

