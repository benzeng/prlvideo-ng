
bool FUN_1003bf370(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
  bVar2 = true;
  if (iVar1 != 0x809) {
    iVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    bVar2 = iVar1 == 0x80b;
  }
  return bVar2;
}

