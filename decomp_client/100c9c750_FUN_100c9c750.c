
void FUN_100c9c750(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar1 | 1;
  FUN_100c9c580();
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}

