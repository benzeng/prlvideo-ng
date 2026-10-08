
int FUN_10079e870(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  iVar2 = 0;
  if (0 < *(int *)(lVar1 + 4)) {
    uVar8 = (ulong)*(int *)(lVar1 + 4);
    uVar7 = 1;
    if (0 < (long)uVar8) {
      uVar7 = uVar8;
    }
    uVar5 = 0;
    iVar2 = 0;
    if (uVar7 != 0) {
      iVar6 = 0;
      iVar2 = 0;
      uVar5 = 0;
      if ((uVar7 & 0xfffffffffffffffe) != 0) {
        plVar4 = (long *)(*(long *)(lVar1 + 0x10) + 8 + lVar1);
        uVar3 = 0;
        if (0 < (long)uVar8) {
          uVar3 = uVar8;
        }
        uVar3 = uVar3 & 0xfffffffffffffffe;
        iVar6 = 0;
        iVar2 = 0;
        do {
          if (iVar6 < *(int *)(plVar4[-1] + 4)) {
            iVar6 = *(int *)(plVar4[-1] + 4);
          }
          if (iVar2 < *(int *)(*plVar4 + 4)) {
            iVar2 = *(int *)(*plVar4 + 4);
          }
          plVar4 = plVar4 + 2;
          uVar3 = uVar3 - 2;
          uVar5 = uVar7 & 0xfffffffffffffffe;
        } while (uVar3 != 0);
      }
      if (iVar2 <= iVar6) {
        iVar2 = iVar6;
      }
      if (uVar7 == uVar5) {
        return iVar2;
      }
    }
    do {
      iVar6 = *(int *)(*(long *)(lVar1 + *(long *)(lVar1 + 0x10) + uVar5 * 8) + 4);
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)uVar8);
  }
  return iVar2;
}

