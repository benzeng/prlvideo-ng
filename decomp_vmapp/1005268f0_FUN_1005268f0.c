
int FUN_1005268f0(char *param_1,long param_2)

{
  Node *pNVar1;
  long lVar2;
  Node *pNVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  
  iVar5 = 0x20;
  if (0 < *(int *)(*(long *)(param_1 + 8) + 0x14)) {
    iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x14) * 4 + 0x30;
  }
  pNVar1 = *(Node **)(param_1 + 0x10);
  if (0 < *(int *)(pNVar1 + 0x14)) {
    iVar5 = iVar5 + 0x10;
    iVar4 = *(int *)(pNVar1 + 0x20);
    if (iVar4 != 0) {
      plVar6 = *(long **)(pNVar1 + 8);
      do {
        pNVar3 = (Node *)*plVar6;
        if (pNVar3 != pNVar1) goto LAB_100526950;
        iVar4 = iVar4 + -1;
        plVar6 = plVar6 + 1;
      } while (iVar4 != 0);
    }
  }
LAB_100526974:
  pNVar1 = *(Node **)(param_1 + 0x18);
  if (0 < *(int *)(pNVar1 + 0x14)) {
    iVar5 = iVar5 + 0x10;
    iVar4 = *(int *)(pNVar1 + 0x20);
    if (iVar4 != 0) {
      plVar6 = *(long **)(pNVar1 + 8);
      do {
        pNVar3 = (Node *)*plVar6;
        if (pNVar3 != pNVar1) goto LAB_1005269b0;
        iVar4 = iVar4 + -1;
        plVar6 = plVar6 + 1;
      } while (iVar4 != 0);
    }
  }
LAB_1005269e5:
  if (*param_1 != '\0') {
    iVar5 = iVar5 + 0x10 + *(int *)(param_2 + 8) * 4;
  }
  return iVar5;
LAB_100526950:
  do {
    lVar2 = *(long *)(pNVar3 + 0x10);
    iVar5 = *(int *)(lVar2 + 0x1c) * 0x10 + iVar5 + 0x44 +
            (*(int *)(lVar2 + 0x78) + *(int *)(lVar2 + 0x40)) * 2;
    pNVar3 = (Node *)QHashData::nextNode(pNVar3);
  } while (pNVar3 != *(Node **)(param_1 + 0x10));
  goto LAB_100526974;
LAB_1005269b0:
  do {
    lVar2 = *(long *)(pNVar3 + 0x10);
    iVar5 = iVar5 + 0x44;
    if ((*(uint *)(lVar2 + 0x90) & 2) != 0) {
      iVar5 = *(int *)(lVar2 + 0x1c) * 0x10 + iVar5;
    }
    if ((*(uint *)(lVar2 + 0x90) & 4) != 0) {
      iVar5 = iVar5 + *(int *)(lVar2 + 0x40) * 2;
    }
    pNVar3 = (Node *)QHashData::nextNode(pNVar3);
  } while (pNVar3 != *(Node **)(param_1 + 0x18));
  goto LAB_1005269e5;
}

