
undefined8 FUN_100446a00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = param_2;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0x27;
  *(undefined4 *)((long)param_3 + 0x14) = 1;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_100446a90;
  param_3[5] = FUN_100446aa0;
  param_3[6] = FUN_100446ac0;
  param_3[7] = FUN_100446af0;
  param_3[8] = FUN_100446b20;
  param_3[9] = FUN_100446b40;
  param_3[10] = FUN_100446b60;
  param_3[0xb] = FUN_100446b80;
  param_3[0xc] = FUN_100446ba0;
  return 0x100446b01;
}

