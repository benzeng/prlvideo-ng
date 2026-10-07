
void FUN_1008c11d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar1 | 1;
  FUN_1008c1000();
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}

