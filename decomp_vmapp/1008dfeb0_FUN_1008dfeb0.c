
int FUN_1008dfeb0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

