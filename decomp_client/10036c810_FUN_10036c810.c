
void FUN_10036c810(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar1 + 0x40);
  lVar2 = *(long *)(lVar4 + 0x28);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (*(long *)(lVar4 + 0x30) != 0)) {
    lVar4 = FUN_1003797e0();
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar1 + 0x40);
      lVar4 = *(long *)(lVar1 + 0x28);
      uVar5 = 0;
      if ((lVar4 != 0) && (uVar5 = 0, *(int *)(lVar4 + 4) != 0)) {
        lVar1 = *(long *)(lVar1 + 0x30);
        uVar5 = 0;
        if (lVar1 != 0) {
          uVar5 = FUN_1003797e0(lVar1);
        }
      }
      iVar3 = FUN_100325aa0(uVar5);
      if (iVar3 == 1) goto LAB_10036c8dc;
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar1 + 0x40);
  lVar2 = *(long *)(lVar4 + 0x28);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (*(long *)(lVar4 + 0x30) != 0)) {
    lVar4 = FUN_1003797e0();
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar1 + 0x40);
      lVar4 = *(long *)(lVar1 + 0x28);
      uVar5 = 0;
      if ((lVar4 != 0) && (uVar5 = 0, *(int *)(lVar4 + 4) != 0)) {
        lVar1 = *(long *)(lVar1 + 0x30);
        uVar5 = 0;
        if (lVar1 != 0) {
          uVar5 = FUN_1003797e0(lVar1);
        }
      }
      iVar3 = FUN_100325aa0(uVar5);
      if (iVar3 == 2) {
LAB_10036c8dc:
        AppHelpUtils::openHelpTopic(0x6e,0);
        return;
      }
    }
  }
  return;
}

