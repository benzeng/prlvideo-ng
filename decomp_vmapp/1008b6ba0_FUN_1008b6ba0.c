
int FUN_1008b6ba0(long param_1,long param_2)

{
  int iVar1;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = FUN_1008a1170(param_1,0), iVar1 < 0)) {
    return -2;
  }
  if (((*(long *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = FUN_1008a1170(param_2,0), iVar1 < 0)) {
    return -2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != *(int *)(param_2 + 0x20)) {
    return iVar1 - *(int *)(param_2 + 0x20);
  }
  iVar1 = _memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
  return iVar1;
}

