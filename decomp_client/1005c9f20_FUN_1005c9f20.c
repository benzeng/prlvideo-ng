
undefined8 FUN_1005c9f20(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 2) = 10;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0x29;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  param_3[4] = FUN_1003afcf0;
  param_3[5] = FUN_1003afd50;
  param_3[6] = FUN_1003afe00;
  param_3[7] = FUN_1003afe50;
  param_3[8] = FUN_1003afe80;
  param_3[9] = FUN_1003afee0;
  param_3[10] = FUN_1003aff00;
  param_3[0xb] = FUN_1003aff20;
  param_3[0xc] = FUN_1003aff40;
  param_3[0xd] = FUN_1003aff60;
  return 0x1003aff01;
}

