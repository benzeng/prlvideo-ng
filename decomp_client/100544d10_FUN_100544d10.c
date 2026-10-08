
void FUN_100544d10(long *param_1)

{
  void *pvVar1;
  
  FUN_100525900();
  *param_1 = (long)&PTR_FUN_10221aed0;
  param_1[2] = (long)&PTR_FUN_10221b0b8;
  pvVar1 = operator_new(0x88);
  param_1[9] = (long)pvVar1;
  FUN_100544d90(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1);
  return;
}

