
bool FUN_1003bf530(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 8) {
    uVar2 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    if (uVar2 < 0x80b) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0x80d) {
        bVar3 = false;
      }
      else {
        iVar1 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
        bVar3 = iVar1 != 0x810;
      }
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

