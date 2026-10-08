
bool FUN_1006fb710(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_1007058c0(*(long *)(param_1 + 0x10) + 0x18,0);
  if (iVar1 == 0) {
    bVar2 = param_2 == 7;
  }
  else {
    iVar1 = FUN_1007058c0(*(long *)(param_1 + 0x10) + 0x18,0);
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}

