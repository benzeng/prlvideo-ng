
bool FUN_1003bf5b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  lVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar4 == 0) {
    bVar6 = false;
  }
  else {
    uVar5 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    uVar5 = FUN_10016f500(uVar5);
    cVar1 = FUN_10061c2b0(uVar5,0x10080);
    if (cVar1 == '\0') {
      bVar6 = false;
    }
    else {
      uVar2 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
      cVar1 = FUN_1009881b0(uVar2);
      if (cVar1 == '\0') {
        bVar6 = false;
      }
      else {
        iVar3 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
        if (iVar3 == 9) {
          bVar6 = false;
        }
        else {
          iVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
          bVar6 = iVar3 != 0x80b;
        }
      }
    }
  }
  return bVar6;
}

