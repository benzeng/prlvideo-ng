
ulong FUN_1009d6c90(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x38) == 0x1000007) {
    uVar1 = *(ulong *)(param_2 + 0x80);
  }
  else if (*(int *)(param_1 + 0x38) == 7) {
    return (ulong)*(uint *)(param_2 + 0x28);
  }
  return uVar1;
}

