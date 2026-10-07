
void FUN_100360aa0(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x98) + 0x18) != 0) {
    puVar1 = *(ulong **)(param_1 + 0xa0);
    *puVar1 = *puVar1 | *(ulong *)(*(long *)puVar1[1] + 0x3070);
  }
  return;
}

