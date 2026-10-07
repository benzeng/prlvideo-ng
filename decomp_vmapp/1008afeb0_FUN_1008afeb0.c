
int FUN_1008afeb0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == *param_2) {
    iVar1 = _memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)iVar1);
    if (iVar1 == 0) {
      iVar1 = param_1[1] - param_2[1];
    }
  }
  else {
    iVar1 = iVar1 - *param_2;
  }
  return iVar1;
}

