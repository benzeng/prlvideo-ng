
bool FUN_1003befe0(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
  bVar2 = true;
  if (iVar1 != 8) {
    iVar1 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 9) {
      iVar1 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
      bVar2 = iVar1 == 7;
    }
  }
  return bVar2;
}

