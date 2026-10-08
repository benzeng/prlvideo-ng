
bool FUN_1003c08b0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar3 == 0) {
    bVar5 = false;
  }
  else {
    uVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    cVar1 = FUN_1001754c0(uVar4,0x21);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      iVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 9) {
        iVar2 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
        bVar5 = iVar2 != 0x915;
      }
      else {
        bVar5 = false;
      }
    }
  }
  return bVar5;
}

