
undefined8 FUN_100701640(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == -1) {
    iVar2 = (**(code **)(param_1 + 4))(param_3,*param_1);
    *param_2 = iVar2;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 2) + (long)iVar2 * 8);
  if (lVar1 != 0) {
    uVar3 = FUN_1007011a0(lVar1,param_2 + 2,param_3,param_4);
    return uVar3;
  }
  *param_2 = -1;
  return 0;
}

