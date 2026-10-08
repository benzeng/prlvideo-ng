
bool FUN_1003becf0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  cVar1 = FUN_1001754c0(uVar5,0x19);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    bVar2 = true;
    if (iVar3 != 9) {
      iVar3 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
      if (iVar3 == 8) {
        uVar4 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
        bVar2 = 0x806 < uVar4;
      }
      else {
        bVar2 = false;
      }
    }
  }
  return bVar2;
}

