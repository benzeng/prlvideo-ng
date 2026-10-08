
bool FUN_1003bf470(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 == 8) {
    uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    bVar1 = 0x80b < uVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

