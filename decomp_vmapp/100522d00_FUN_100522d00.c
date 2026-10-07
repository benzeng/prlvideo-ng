
void FUN_100522d00(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = param_4;
  return;
}

