
undefined8 FUN_1003dfc50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 2) = 10;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0x1c;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  param_3[4] = FUN_1003dfcf0;
  param_3[5] = FUN_1003dfd50;
  param_3[6] = FUN_1003dfe00;
  param_3[7] = FUN_1003dfe50;
  param_3[8] = FUN_1003dfe80;
  param_3[9] = FUN_1003dfee0;
  param_3[10] = FUN_1003dff00;
  param_3[0xb] = FUN_1003dff20;
  param_3[0xc] = FUN_1003dff40;
  param_3[0xd] = FUN_1003dff60;
  return 0x1003dff01;
}

