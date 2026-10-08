
int FUN_100c2a670(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  bVar11 = *param_2 == '-';
  if (bVar11) {
    param_2 = param_2 + 1;
  }
  plVar4 = (long *)0x0;
  lVar5 = 1;
  while ((byte)param_2[lVar5 + -1] - 0x30 < 10) {
    if (9 < (byte)param_2[lVar5] - 0x30) goto LAB_100c2a6f6;
    lVar10 = lVar5 + 1;
    lVar5 = lVar5 + 2;
    if (0x1fffffff < lVar10) {
LAB_100c2a846:
      if (*param_1 == 0) {
        FUN_100c266b0(plVar4);
        return 0;
      }
      return 0;
    }
  }
  lVar5 = lVar5 + -1;
LAB_100c2a6f6:
  plVar4 = (long *)0x0;
  iVar9 = (int)lVar5;
  if (0x1fffffff < iVar9) goto LAB_100c2a846;
  if (param_1 == (long *)0x0) {
    return iVar9 + (uint)bVar11;
  }
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_100c26720();
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
  else {
    FUN_100c26db0(plVar4,0);
  }
  iVar2 = iVar9 * 4;
  if ((0x7fffffc0 < iVar2) ||
     ((*(int *)((long)plVar4 + 0xc) <
       (int)(iVar2 + 0x3f + ((uint)(iVar2 + 0x3f >> 0x1f) >> 0x1a)) >> 6 &&
      (lVar5 = FUN_100c26b00(plVar4), lVar5 == 0)))) goto LAB_100c2a846;
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    iVar2 = 0x13 - iVar9 % 0x13;
    if (iVar9 % 0x13 == 0) {
      iVar2 = 0;
    }
    lVar5 = 0;
    do {
      param_2 = param_2 + 1;
      lVar5 = (long)cVar1 + -0x30 + lVar5 * 10;
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x13) {
        FUN_100c2bb00(plVar4,10000000000000000000);
        FUN_100c2b920(plVar4,lVar5);
        lVar5 = 0;
        iVar2 = 0;
      }
      cVar1 = *param_2;
    } while (cVar1 != '\0');
  }
  *(uint *)(plVar4 + 2) = (uint)bVar11;
  uVar6 = (ulong)(int)plVar4[1];
  if (0 < (long)uVar6) {
    plVar7 = (long *)(*plVar4 + -8 + uVar6 * 8);
    do {
      uVar3 = (uint)uVar6;
      uVar8 = uVar3;
      if (*plVar7 != 0) break;
      plVar7 = plVar7 + -1;
      uVar8 = uVar3 - 1;
      uVar6 = (ulong)uVar8;
    } while (1 < (int)uVar3);
    *(uint *)(plVar4 + 1) = uVar8;
  }
  *param_1 = (long)plVar4;
  return iVar9 + (uint)bVar11;
}

