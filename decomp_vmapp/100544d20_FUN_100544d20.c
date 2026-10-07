
int FUN_100544d20(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar1 = _munmap();
    iVar3 = 0;
    if (iVar1 != 0) {
      piVar2 = ___error();
      iVar3 = -*piVar2;
    }
  }
  return iVar3;
}

