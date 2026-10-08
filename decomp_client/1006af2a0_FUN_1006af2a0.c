
bool FUN_1006af2a0(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
  bVar2 = true;
  if (iVar1 != 0x30000001) {
    iVar1 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
    bVar2 = iVar1 == 0x30000009;
  }
  return bVar2;
}

