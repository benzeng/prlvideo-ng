
void FUN_100609b40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_100bc8190;
  param_1[1] = param_2;
  FUN_1006078f0(param_1 + 2);
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((long)param_1 + 0x112) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

