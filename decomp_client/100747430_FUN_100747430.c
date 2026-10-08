
void FUN_100747430(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = FUN_1002dabc0();
  if (iVar1 == iVar2) {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = FUN_1002dab50();
    if (iVar1 == iVar2) {
      return;
    }
  }
  FUN_1007471d0(param_1);
  return;
}

