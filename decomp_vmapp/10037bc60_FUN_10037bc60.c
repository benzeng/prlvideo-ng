
void FUN_10037bc60(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = 0;
  *(undefined8 **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = 0;
  *(undefined2 *)param_2 = 9;
  *(undefined2 *)((long)param_2 + 2) = 7;
  return;
}

