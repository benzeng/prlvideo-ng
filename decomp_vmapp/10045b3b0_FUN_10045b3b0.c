
int FUN_10045b3b0(undefined4 *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_4 != 0) {
    iVar2 = param_4;
    do {
      (**(code **)(param_1 + 10))(param_1);
      (**(code **)(param_1 + 0xe))(param_2,*(long *)(param_1 + 4) + 4,*param_1);
      param_1[2] = param_1[2] + 1;
      param_2 = param_2 + param_3;
      iVar2 = iVar2 + -1;
      iVar1 = param_4;
    } while (iVar2 != 0);
  }
  return iVar1;
}

