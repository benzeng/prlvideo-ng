
void FUN_100325c00(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = param_2;
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  FUN_100324300(param_1);
  FUN_10082a730(param_1,param_2,iVar1);
  return;
}

