
int FUN_10070d240(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar2 + 0x168);
  uVar8 = (ulong)uVar1;
  iVar3 = 0;
  if (uVar8 != 0) {
    uVar6 = 0;
    iVar3 = 0;
    iVar7 = 0;
    if (uVar1 != (uVar1 & 1)) {
      uVar6 = uVar8 - (uVar1 & 1);
      plVar4 = (long *)(lVar2 + 0x178);
      lVar5 = uVar8 - (uVar8 & 1);
      iVar3 = 0;
      iVar7 = 0;
      do {
        iVar3 = iVar3 + *(int *)(plVar4[-1] + 0x18);
        iVar7 = iVar7 + *(int *)(*plVar4 + 0x18);
        plVar4 = plVar4 + 2;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
    }
    iVar3 = iVar3 + iVar7;
    if (uVar8 != uVar6) {
      do {
        iVar3 = iVar3 + *(int *)(*(long *)(lVar2 + 0x170 + uVar6 * 8) + 0x18);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  return iVar3;
}

