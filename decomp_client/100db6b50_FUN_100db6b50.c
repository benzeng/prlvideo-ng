
long FUN_100db6b50(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 1) & 1;
  lVar1 = 0;
  if ((*(uint *)(param_2 + 1) & uVar2) == 0) {
    if (((*(uint *)(param_2 + 1) | *(uint *)(param_1 + 1)) & 1) != 0) {
      return (ulong)uVar2 * 2 + -1;
    }
    lVar1 = *param_1 - *param_2;
  }
  return lVar1;
}

