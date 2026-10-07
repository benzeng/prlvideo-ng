
void FUN_1003929f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  FUN_1003a2e80(param_1,param_2,param_12,param_5);
  *param_1 = &PTR_FUN_100bbd2d0;
  param_1[4] = param_3;
  param_1[5] = param_12;
  param_1[6] = param_2;
  param_1[7] = param_4;
  *(undefined4 *)(param_1 + 8) = param_9;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  param_1[9] = param_11;
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((long)param_1 + 0x51) = param_8;
  FUN_1003a18a0(param_1 + 0xb,param_2,param_10);
  FUN_100392ad0(param_1,param_5,param_10,param_7);
  return;
}

