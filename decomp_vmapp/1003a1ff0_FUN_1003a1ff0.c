
void FUN_1003a1ff0(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  FUN_10038e870(param_1 + 0x24,param_1 + 4,0x80);
  return;
}

