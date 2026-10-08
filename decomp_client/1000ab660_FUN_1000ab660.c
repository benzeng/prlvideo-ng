
undefined8 FUN_1000ab660(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 5;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_1000ab6f0;
  param_3[5] = FUN_1000ab700;
  param_3[6] = FUN_1000ab720;
  param_3[7] = FUN_1000ab750;
  param_3[8] = FUN_1000ab780;
  param_3[9] = FUN_1000ab7a0;
  param_3[10] = FUN_1000ab7c0;
  param_3[0xb] = FUN_1000ab7e0;
  param_3[0xc] = FUN_1000ab800;
  return 0x1000ab801;
}

