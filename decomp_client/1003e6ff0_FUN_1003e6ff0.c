
undefined8 FUN_1003e6ff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 2;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_1003e7080;
  param_3[5] = FUN_1003e7090;
  param_3[6] = FUN_1003e70b0;
  param_3[7] = FUN_1003e70e0;
  param_3[8] = FUN_1003e7110;
  param_3[9] = FUN_1003e7130;
  param_3[10] = FUN_1003e7150;
  param_3[0xb] = FUN_1003e7170;
  param_3[0xc] = FUN_1003e7190;
  return 0x1003e7101;
}

