
long FUN_1005ae840(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = ((ulong)*(uint *)(param_1 + 0xcc) - 1) +
          (ulong)(uint)(*(int *)(param_1 + 200) * *(int *)(param_2 + 0x38)) +
          *(long *)(param_1 + 0x10c0);
  return uVar1 - uVar1 % (ulong)*(uint *)(param_1 + 0xcc);
}

