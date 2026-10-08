
void FUN_100490f40(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_100458870();
  *param_1 = &PTR_FUN_1022151e0;
  param_1[2] = &PTR_FUN_1022153e8;
  pvVar1 = operator_new(0x40);
  param_1[0xd] = pvVar1;
  FUN_100491220(pvVar1,param_1);
  return;
}

