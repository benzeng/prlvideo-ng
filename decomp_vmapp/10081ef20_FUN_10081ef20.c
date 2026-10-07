
void FUN_10081ef20(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + -1;
  if (iVar1 < 2) {
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10081ef20();
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

