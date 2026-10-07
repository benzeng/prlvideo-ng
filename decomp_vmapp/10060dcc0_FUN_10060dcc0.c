
void FUN_10060dcc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,ushort *param_8)

{
  ushort uVar1;
  undefined1 local_440 [4];
  undefined4 local_43c;
  short local_438 [256];
  short local_238 [260];
  
  FUN_100607f30(local_238);
  FUN_100609910(local_440,param_2);
  FUN_100608100(local_238,param_3,0,0);
  local_43c = param_4;
  FUN_100607d10(local_438,param_5,param_6);
  *(short *)(param_1 + 0x682) = *(short *)(param_1 + 0x682) + 1;
  *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x574) + 1;
  FUN_1006080b0(local_238,(ulong)*param_8 + param_7);
  uVar1 = local_238[0] + *param_8 + 2;
  *param_8 = uVar1;
  FUN_100609ae0(local_440,(ulong)uVar1 + param_7);
  *param_8 = local_438[0] * 2 + *param_8 + 10;
  return;
}

