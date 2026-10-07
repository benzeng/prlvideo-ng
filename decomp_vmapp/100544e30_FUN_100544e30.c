
int FUN_100544e30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _msync(param_1,param_2,0x10);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = ___error();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

