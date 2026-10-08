
bool FUN_10036c790(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else if (*(int *)(lVar2 + 4) == 0) {
    bVar4 = false;
  }
  else if (*(long *)(*(long *)(param_1 + 0x40) + 0x30) == 0) {
    bVar4 = false;
  }
  else {
    lVar2 = FUN_1003797e0();
    if (lVar2 == 0) {
      bVar4 = false;
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      uVar3 = 0;
      if ((lVar2 != 0) && (uVar3 = 0, *(int *)(lVar2 + 4) != 0)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = FUN_1003797e0(lVar2);
        }
      }
      iVar1 = FUN_100325aa0(uVar3);
      bVar4 = iVar1 == 4;
    }
  }
  return bVar4;
}

