
void FUN_10068a330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc9e08;
  param_1[0x3021] = &PTR_FUN_100bca1c0;
  FUN_100698030(param_1,&PTR_PTR_100bca378);
  FUN_100684e00(param_1 + 0x3021);
  operator_delete(param_1);
  return;
}

