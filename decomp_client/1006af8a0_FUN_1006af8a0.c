
bool FUN_1006af8a0(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_10018f860(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 8) {
    uVar3 = FUN_10018f890(*(undefined8 *)(param_1 + 0x20));
    bVar1 = 0x805 < uVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

