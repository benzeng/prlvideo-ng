
void FUN_1000f0ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-2] = &PTR_FUN_10226d178;
  *param_1 = &PTR_FUN_10226d1a8;
  puVar1 = param_1 + -2;
  if (param_1[4] != 0) {
    _CFRelease();
  }
  *puVar1 = &PTR_FUN_10226d258;
  *param_1 = &PTR_FUN_10226d288;
  FUN_100039a80(param_1 + 2);
  FUN_1000f0360(puVar1);
  operator_delete(puVar1);
  return;
}

