
void FUN_1009bd630(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-2] = &PTR_FUN_10227e228;
  *param_1 = &PTR_FUN_10227e258;
  puVar1 = param_1 + -2;
  FUN_100039a80(param_1 + 4);
  *puVar1 = &PTR_FUN_10226d258;
  *param_1 = &PTR_FUN_10226d288;
  FUN_100039a80(param_1 + 2);
  FUN_1000f0360(puVar1);
  operator_delete(puVar1);
  return;
}

