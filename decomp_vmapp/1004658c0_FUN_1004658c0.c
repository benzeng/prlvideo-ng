
void FUN_1004658c0(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  puVar1 = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 2) = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 6) = puVar1;
  return;
}

