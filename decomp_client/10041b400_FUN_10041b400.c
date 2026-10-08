
undefined8 FUN_10041b400(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 1) = 10;
  *(undefined4 *)((long)param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 2) = 0x29;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  param_3[3] = FUN_10041b440;
  param_3[4] = FUN_10041b460;
  return 0x10041b401;
}

