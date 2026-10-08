
undefined8 FUN_100c01240(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[7] = 1;
  *(undefined8 *)(param_1 + 3) = 0x5252525252525252;
  *(undefined8 *)(param_1 + 5) = 0x2525252525252525;
  return 1;
}

