
void FUN_100294d50(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1021ef708;
  *param_1 = &PTR_FUN_1021ef738;
  if (param_1[4] != 0) {
    _PrlHandle_Free();
  }
  FUN_1002948a0(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

