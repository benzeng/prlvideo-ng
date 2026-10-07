
int FUN_10089aa90(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar3 == (*(uint *)(param_2 + 4) & 0x100)) {
    iVar2 = FUN_1008afeb0();
    iVar1 = -iVar2;
    if (uVar3 == 0) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = (uVar3 >> 7 ^ 2) - 1;
  }
  return iVar1;
}

