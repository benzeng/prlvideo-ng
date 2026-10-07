
void FUN_1003434a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = param_2[1];
  param_1[2] = *param_2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 2);
  return;
}

