
undefined8 FUN_100737670(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined4 uVar11;
  long *plVar12;
  
  if ((int)param_2[2] == 0) {
    uVar11 = 0;
    plVar10 = param_3;
    plVar12 = param_2;
    if ((int)param_3[2] != 0) goto LAB_100737723;
  }
  else {
    plVar10 = param_2;
    plVar12 = param_3;
    if ((int)param_3[2] == 0) {
      uVar11 = 1;
LAB_100737723:
      iVar4 = FUN_100736d50(param_1,param_2,param_3);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x10) = uVar11;
        return 1;
      }
      return 0;
    }
  }
  iVar4 = (int)plVar12[1];
  iVar6 = (int)plVar10[1];
  iVar3 = iVar6;
  if (iVar6 <= iVar4) {
    iVar3 = iVar4;
  }
  if (*(int *)(param_1 + 0xc) < iVar3) {
    lVar5 = FUN_10072d730(param_1);
    if (lVar5 == 0) {
      return 0;
    }
    iVar4 = (int)plVar12[1];
    iVar6 = (int)plVar10[1];
  }
  if (iVar4 == iVar6) {
    lVar5 = (long)iVar6;
    lVar7 = (long)(iVar6 + -1) * 8;
    puVar9 = (ulong *)(*plVar10 + lVar7);
    puVar8 = (ulong *)(lVar7 + *plVar12);
    do {
      if (lVar5 < 1) goto LAB_100737761;
      uVar1 = *puVar9;
      lVar5 = lVar5 + -1;
      puVar9 = puVar9 + -1;
      uVar2 = *puVar8;
      puVar8 = puVar8 + -1;
    } while (uVar2 == uVar1);
    if (uVar2 <= uVar1) {
LAB_100737741:
      iVar4 = FUN_100737410(param_1,plVar10,plVar12);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      return 0;
    }
  }
  else if (iVar4 < iVar6) goto LAB_100737741;
LAB_100737761:
  iVar4 = FUN_100737410(param_1,plVar12,plVar10);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 1;
  }
  return 0;
}

