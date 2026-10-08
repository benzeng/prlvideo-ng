
void FUN_10053c630(long *param_1)

{
  void *pvVar1;
  
  FUN_100525900();
  *param_1 = (long)&PTR_FUN_10221ac40;
  param_1[2] = (long)&PTR_FUN_10221ae28;
  pvVar1 = operator_new(0xa0);
  param_1[9] = (long)pvVar1;
  FUN_10053c6b0(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1);
  return;
}

