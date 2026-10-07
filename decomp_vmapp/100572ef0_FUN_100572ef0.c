
int FUN_100572ef0(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1158) != 0) {
    uVar1 = *(int *)(param_1 + 0x1158) + -1 + *(uint *)(param_1 + 0x1120);
    iVar2 = uVar1 - uVar1 % *(uint *)(param_1 + 0x1120);
  }
  return iVar2;
}

