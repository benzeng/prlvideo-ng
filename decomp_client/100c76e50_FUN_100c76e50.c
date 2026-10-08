
void FUN_100c76e50(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int *local_20;
  
  if (*(long *)(param_1 + 2) != 0) {
    local_20 = param_1;
    FUN_100c806b0(&local_20,0);
    param_1 = local_20;
  }
  *param_1 = param_2;
  if (param_2 == 1) {
    iVar1 = 0xff;
    if (param_3 == 0) {
      iVar1 = 0;
    }
    param_1[2] = iVar1;
  }
  else {
    *(long *)(param_1 + 2) = param_3;
  }
  return;
}

