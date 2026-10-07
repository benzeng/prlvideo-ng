
void FUN_10055bef0(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x24);
  FUN_10055b040(param_1,param_2 / uVar1,(ulong)param_2 % uVar1);
  return;
}

