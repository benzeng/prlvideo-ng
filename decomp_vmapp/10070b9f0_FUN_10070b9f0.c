
long FUN_10070b9f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((*(uint *)(param_2 + 1) & *(uint *)(param_1 + 1) & 1) == 0) &&
     (lVar1 = 1, (*(uint *)(param_1 + 1) & 1) == 0)) {
    lVar1 = *param_1 - *param_2;
  }
  return lVar1;
}

