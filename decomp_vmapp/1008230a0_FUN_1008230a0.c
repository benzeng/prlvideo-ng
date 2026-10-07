
int FUN_1008230a0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == *(int *)(param_2 + 0x14)) {
    iVar1 = _memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
    return iVar1;
  }
  return iVar1 - *(int *)(param_2 + 0x14);
}

