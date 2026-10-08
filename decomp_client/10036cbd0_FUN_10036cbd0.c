
void FUN_10036cbd0(long param_1,undefined1 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  lVar1 = *(long *)(lVar3 + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) && (*(long *)(lVar3 + 0x30) != 0)) {
    lVar3 = FUN_1003797e0();
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      lVar1 = *(long *)(lVar3 + 0x28);
      uVar4 = 0;
      if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar3 = *(long *)(lVar3 + 0x30);
        uVar4 = 0;
        if (lVar3 != 0) {
          uVar4 = FUN_1003797e0(lVar3);
        }
      }
      iVar2 = FUN_100325aa0(uVar4);
      if ((iVar2 == 1) || (iVar2 == 4)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
        lVar1 = *(long *)(lVar3 + 0x28);
        uVar4 = 0;
        if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
          lVar3 = *(long *)(lVar3 + 0x30);
          uVar4 = 0;
          if (lVar3 != 0) {
            uVar4 = FUN_1003797e0(lVar3);
          }
        }
        FUN_100325b20(uVar4,param_2);
        return;
      }
    }
  }
  return;
}

