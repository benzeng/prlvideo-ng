
uint FUN_100ca9fe0(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    bVar3 = *(long *)(param_1 + 0x10) != 0;
    uVar2 = (uint)bVar3;
    if (*(long *)(param_1 + 8) != 0) {
      iVar1 = FUN_100c60800();
      uVar2 = (uint)bVar3 + iVar1;
    }
  }
  return uVar2;
}

