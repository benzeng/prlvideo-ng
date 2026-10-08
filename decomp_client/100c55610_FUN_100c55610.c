
int FUN_100c55610(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  iVar1 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x70))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0xb0);
    }
  }
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  *(int *)(param_1 + 0xb0) = iVar2 + 1;
  return iVar1;
}

