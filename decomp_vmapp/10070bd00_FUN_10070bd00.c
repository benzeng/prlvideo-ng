
void FUN_10070bd00(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_100bce000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  return;
}

