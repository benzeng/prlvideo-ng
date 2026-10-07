
void FUN_10060a1b0(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = (**(code **)(*param_2 + 0x2e0))(param_2);
  FUN_100603f80(param_1,param_2,((ulong)uVar1 * param_3) / uVar2,param_4,param_5);
  return;
}

