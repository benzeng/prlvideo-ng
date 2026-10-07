
void FUN_100593a40(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 local_878;
  undefined4 local_870;
  undefined8 *local_868;
  undefined8 *local_860;
  undefined8 local_848;
  code *local_830;
  int local_828;
  undefined4 local_824;
  undefined8 local_820;
  int local_818;
  
  *param_1 = 0;
  param_1[1] = param_4;
  param_1[2] = 0;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined4 *)(param_1 + 0x21b) = 7;
  param_1[0x21c] = param_2 / *(uint *)(param_4 + 0x18);
  param_1[0x21d] = param_3;
  param_1[0x21e] = 0xffffffffffffffff;
  param_1[0x21f] = param_2;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)((long)param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x221) = 1;
  *(undefined4 *)((long)param_1 + 0x110c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x222) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1114) = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x22d));
  *(undefined4 *)(param_1 + 0x22e) = 4;
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
  FUN_10070ae60(&local_878);
  local_870 = 0;
  local_878 = param_1[0x21d];
  local_830 = FUN_100593830;
  local_868 = param_1;
  local_860 = param_1;
  local_848 = (**(code **)(**(long **)(param_1[1] + 0x70) + 0x250))();
  lVar1 = ((long *)param_1[1])[3];
  local_828 = (**(code **)(*(long *)param_1[1] + 0x30))();
  local_828 = local_828 * (int)lVar1;
  local_824 = 1;
  local_820 = param_1[4];
  lVar1 = ((long *)param_1[1])[3];
  local_818 = (**(code **)(*(long *)param_1[1] + 0x30))();
  local_818 = local_818 * (int)lVar1;
  _memcpy(param_1 + 5,&local_878,0x858);
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_10070ae60(param_1 + 0x110);
  return;
}

