
void FUN_1003a2050(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  FUN_10038e870(param_1 + 0x24,param_1 + 4,0x80);
  return;
}

