
bool FUN_1002db000(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x60 + (ulong)(param_2 + 2) * 8) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_1002d6ce0();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

