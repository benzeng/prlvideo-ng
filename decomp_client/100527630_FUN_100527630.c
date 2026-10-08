
void FUN_100527630(long *param_1)

{
  void *pvVar1;
  
  FUN_100525900();
  *param_1 = (long)&PTR_FUN_10221a370;
  param_1[2] = (long)&PTR_FUN_10221a558;
  pvVar1 = operator_new(0xd8);
  param_1[9] = (long)pvVar1;
  FUN_1005276b0(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1);
  return;
}

