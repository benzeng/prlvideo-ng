
bool FUN_1003bedc0(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
  if (0x805 < uVar1) {
    uVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    if (uVar1 < 0x811) {
      return true;
    }
  }
  iVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
  return iVar2 == 9;
}

