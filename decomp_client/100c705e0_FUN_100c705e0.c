
int FUN_100c705e0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if (iVar1 == 0) {
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}

