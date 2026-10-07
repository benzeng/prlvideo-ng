
void FUN_10060dbb0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,ushort *param_10)

{
  ushort uVar1;
  undefined2 local_290 [2];
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_240;
  short local_238 [260];
  
  FUN_100607f30(local_238);
  FUN_100608540(local_290);
  FUN_100608100(local_238,param_3,param_4,param_5);
  local_290[0] = 1;
  local_28c = param_7;
  local_284 = *(int *)(param_1 + 0x30) + 1;
  local_240 = param_8;
  local_270 = *param_6;
  local_268 = param_6[1];
  *(short *)(param_1 + 0x682) = *(short *)(param_1 + 0x682) + 1;
  *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x574) + 1;
  local_288 = param_2;
  local_280 = local_284;
  FUN_1006080b0(local_238,(ulong)*param_10 + param_9);
  uVar1 = local_238[0] + *param_10 + 2;
  *param_10 = uVar1;
  FUN_100608ce0(local_290,(ulong)uVar1 + param_9);
  *param_10 = *param_10 + 0x58;
  return;
}

