
void FUN_1002d9d20(undefined8 *param_1,long param_2)

{
  param_1[1] = param_2;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *param_1 = &PTR_FUN_100bb3c40;
  return;
}

