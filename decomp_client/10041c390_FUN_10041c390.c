
undefined8 FUN_10041c390(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 2) = 2;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0x29;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  param_3[4] = FUN_10041c430;
  param_3[5] = FUN_10041c490;
  param_3[6] = FUN_10041c500;
  param_3[7] = FUN_10041c550;
  param_3[8] = FUN_10041c580;
  param_3[9] = FUN_10041c5e0;
  param_3[10] = FUN_10041c600;
  param_3[0xb] = FUN_10041c620;
  param_3[0xc] = FUN_10041c640;
  param_3[0xd] = FUN_10041c660;
  return 0x10041c601;
}

