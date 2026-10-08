
int FUN_100c81440(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = iVar2;
  if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  iVar3 = _memcmp((void *)*param_1,(void *)*param_2,(long)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}

