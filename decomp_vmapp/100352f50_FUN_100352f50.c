
void FUN_100352f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                  undefined1 param_13,undefined8 param_14)

{
  FUN_1003a2e80(param_1,param_2,param_14,param_5);
  *param_1 = &PTR_FUN_100bbbef0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_14;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  param_1[0xe] = param_8;
  FUN_1003a18a0(param_1 + 0xf,param_2,0xe0);
  *(undefined1 *)(param_1 + 0x12) = param_9;
  *(undefined4 *)((long)param_1 + 0x94) = param_11;
  *(undefined4 *)(param_1 + 0x13) = param_12;
  *(undefined1 *)((long)param_1 + 0x9c) = param_13;
  FUN_100353040(param_1,param_6,param_10);
  return;
}

