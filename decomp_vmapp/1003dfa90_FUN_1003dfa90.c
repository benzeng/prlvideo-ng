
bool FUN_1003dfa90(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong local_18;
  ulong local_10;
  
  local_18 = (ulong)param_2;
  local_10 = (ulong)param_3;
  *(uint *)(param_1 + 0xc) = param_2 * param_3 * 2;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),&local_18);
  return iVar1 == 0;
}

