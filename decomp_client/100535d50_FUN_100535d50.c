
void FUN_100535d50(long *param_1)

{
  void *pvVar1;
  
  FUN_100525900();
  *param_1 = (long)&PTR_FUN_10221a9b8;
  param_1[2] = (long)&PTR_FUN_10221aba0;
  pvVar1 = operator_new(0xb8);
  param_1[9] = (long)pvVar1;
  FUN_100535dd0(param_1);
  FUN_100536b00(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1);
  return;
}

