
void FUN_10036d2f0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = 0;
  if (((*(long *)(lVar1 + 0x28) != 0) && (*(int *)(*(long *)(lVar1 + 0x28) + 4) != 0)) &&
     (*(long *)(lVar1 + 0x30) != 0)) {
    lVar3 = FUN_1003797e0();
    uVar2 = 0;
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      uVar4 = 0;
      if ((lVar3 != 0) && (uVar4 = 0, *(int *)(lVar3 + 4) != 0)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
        uVar4 = 0;
        if (lVar3 != 0) {
          uVar4 = FUN_1003797e0(lVar3);
        }
      }
      uVar2 = FUN_100325aa0(uVar4);
    }
  }
  FUN_10036bdc0(lVar1,uVar2);
  return;
}

