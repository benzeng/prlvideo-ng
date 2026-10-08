
int FUN_100389fe0(long param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 < 0) || (param_2[1] < 0)) || (iVar1 = 0, *(long *)(param_2 + 4) == 0)) {
    iVar1 = *(int *)(**(long **)(param_1 + 0x10) + 0xc) - *(int *)(**(long **)(param_1 + 0x10) + 8);
  }
  return iVar1;
}

