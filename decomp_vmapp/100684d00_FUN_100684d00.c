
void FUN_100684d00(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_100bc9a40;
  puVar1 = PTR_shared_null_100ba20d0;
  param_1[2] = (long)PTR_shared_null_100ba20d0;
  param_1[6] = (long)puVar1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0x200;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  (**(code **)(*param_1 + 0x188))(param_1,0xffffffffffffffff);
  return;
}

