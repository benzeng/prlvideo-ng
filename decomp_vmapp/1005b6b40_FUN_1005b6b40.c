
void FUN_1005b6b40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0x200;
  *(undefined8 *)(param_1 + 8) = 0x200;
  FUN_1007d6870(param_1 + 10);
  FUN_1007d6870(param_1 + 0xe);
  *(undefined **)(param_1 + 0x12) = PTR_shared_null_100ba20d0;
  *(undefined4 **)(param_1 + 0x14) = param_1 + 0x14;
  *(undefined4 **)(param_1 + 0x16) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

