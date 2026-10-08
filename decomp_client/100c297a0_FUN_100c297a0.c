
undefined8 FUN_100c297a0(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar1 = (int)param_2[1];
  lVar12 = (long)iVar1;
  if ((lVar12 == 0) || (iVar2 = (int)param_3[1], iVar2 == 0)) {
    FUN_100c26db0(param_1,0);
    return 1;
  }
  FUN_100c27c60(param_4);
  if ((param_1 == param_2) || (plVar6 = param_1, param_1 == param_3)) {
    plVar6 = (long *)FUN_100c27e20(param_4);
    uVar13 = 0;
    if (plVar6 == (long *)0x0) goto LAB_100c29a93;
  }
  *(uint *)(plVar6 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
  if ((iVar1 == 8) && (iVar2 == 8)) {
    if (*(int *)((long)plVar6 + 0xc) < 0x10) {
      lVar12 = FUN_100c26b00(plVar6,0x10);
      uVar13 = 0;
      if (lVar12 == 0) goto LAB_100c29a93;
    }
    *(undefined4 *)(plVar6 + 1) = 0x10;
    FUN_100c2f060(*plVar6,*param_2,*param_3);
  }
  else {
    iVar11 = iVar2 + iVar1;
    if ((iVar1 < 0x10) || ((iVar2 < 0x10 || (iVar4 = iVar1 - iVar2, 2 < iVar4 + 1U)))) {
      if (*(int *)((long)plVar6 + 0xc) < iVar11) {
        lVar12 = FUN_100c26b00(plVar6);
        uVar13 = 0;
        if (lVar12 == 0) goto LAB_100c29a93;
      }
      *(int *)(plVar6 + 1) = iVar11;
      FUN_100c28a00(*plVar6,*param_2,iVar1,*param_3,iVar2);
    }
    else {
      if (iVar4 < 0) {
        cVar3 = '\0';
        if (iVar4 == -1) {
          lVar12 = (long)iVar2;
          goto LAB_100c29919;
        }
      }
      else {
LAB_100c29919:
        cVar3 = FUN_100c26520(lVar12);
      }
      iVar4 = 1 << (cVar3 - 1U & 0x1f);
      puVar7 = (undefined8 *)FUN_100c27e20(param_4);
      uVar14 = 0;
      uVar13 = 0;
      if (puVar7 == (undefined8 *)0x0) goto LAB_100c29a93;
      uVar13 = uVar14;
      if ((iVar4 < iVar1) || (iVar4 < iVar2)) {
        if (((*(int *)((long)puVar7 + 0xc) < iVar4 * 8) &&
            (lVar12 = FUN_100c26b00(puVar7), lVar12 == 0)) ||
           ((*(int *)((long)plVar6 + 0xc) < iVar4 * 8 &&
            (lVar12 = FUN_100c26b00(plVar6), lVar12 == 0)))) goto LAB_100c29a93;
        FUN_100c28b60(*plVar6,*param_2,*param_3,iVar4,iVar1 - iVar4,iVar2 - iVar4,*puVar7);
      }
      else {
        if (((*(int *)((long)puVar7 + 0xc) < iVar4 * 4) &&
            (lVar12 = FUN_100c26b00(puVar7), lVar12 == 0)) ||
           ((*(int *)((long)plVar6 + 0xc) < iVar4 * 4 &&
            (lVar12 = FUN_100c26b00(plVar6), lVar12 == 0)))) goto LAB_100c29a93;
        FUN_100c284c0(*plVar6,*param_2,*param_3,iVar4,iVar1 - iVar4,iVar2 - iVar4,*puVar7);
      }
      *(int *)(plVar6 + 1) = iVar11;
    }
  }
  uVar8 = (ulong)(int)*(uint *)(plVar6 + 1);
  if (0 < (long)uVar8) {
    plVar9 = (long *)(*plVar6 + -8 + uVar8 * 8);
    do {
      uVar5 = (uint)uVar8;
      uVar10 = uVar5;
      if (*plVar9 != 0) break;
      plVar9 = plVar9 + -1;
      uVar10 = uVar5 - 1;
      uVar8 = (ulong)uVar10;
    } while (1 < (int)uVar5);
    *(uint *)(plVar6 + 1) = uVar10;
  }
  uVar13 = 1;
  if (plVar6 != param_1) {
    FUN_100c26b50(param_1,plVar6);
  }
LAB_100c29a93:
  FUN_100c27d40(param_4);
  return uVar13;
}

