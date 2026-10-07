
void FUN_1005938d0(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 0x21b) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x21c] = param_3 / *(uint *)(param_4 + 0x18);
  param_1[0x21e] = 0xffffffffffffffff;
  param_1[0x21d] = 0xffffffffffffffff;
  param_1[0x21f] = param_3;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)((long)param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x221) = 1;
  *(undefined4 *)((long)param_1 + 0x110c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x222) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1114) = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x22d));
  *(undefined4 *)(param_1 + 0x22e) = 3;
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  param_1[0x229] = param_1 + 0x229;
  param_1[0x22a] = param_1 + 0x229;
  param_1[0x22b] = param_1;
  param_1[0x22c] = FUN_100593820;
  FUN_10070ae60(param_1 + 5);
  FUN_10070ae60(param_1 + 0x110);
  return;
}

