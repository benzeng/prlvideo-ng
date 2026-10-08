
bool FUN_1003bec80(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  cVar1 = FUN_1001754c0(uVar4,0x14);
  if (cVar1 == '\0') {
    bVar5 = false;
  }
  else {
    iVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 8) {
      uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
      if (0x80b < uVar3) {
        return true;
      }
    }
    iVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    bVar5 = iVar2 == 9;
  }
  return bVar5;
}

