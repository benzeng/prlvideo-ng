
void FUN_10036d7d0(long param_1,long *param_2)

{
  long lVar1;
  
  *(long **)(param_1 + 0x18) = param_2;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    param_2[1] = param_1;
  }
  else {
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(lVar1 + 8) = param_1;
  }
  *param_2 = param_1;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  return;
}

