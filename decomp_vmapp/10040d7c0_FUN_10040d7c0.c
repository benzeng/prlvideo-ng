
void FUN_10040d7c0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = param_2;
  *(undefined1 *)((long)param_1 + 0x44) = param_3;
  *(undefined1 *)((long)param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 9) = param_4;
  *(undefined4 *)((long)param_1 + 0x4c) = param_5;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_100bbff20;
  return;
}

