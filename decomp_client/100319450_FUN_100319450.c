
int FUN_100319450(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_100319470();
    iVar2 = 1;
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

