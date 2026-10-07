
int FUN_100544e60(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _msync(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),0x10);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = ___error();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

