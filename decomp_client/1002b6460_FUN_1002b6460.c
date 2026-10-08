
void FUN_1002b6460(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-2] = &PTR_FUN_102272c48;
  *param_1 = &PTR_FUN_102272c78;
  puVar1 = param_1 + -2;
  FUN_100039a80(param_1 + 4);
  *puVar1 = &PTR_FUN_10226d258;
  *param_1 = &PTR_FUN_10226d288;
  FUN_100039a80(param_1 + 2);
  FUN_1000f0360(puVar1);
  operator_delete(puVar1);
  return;
}

