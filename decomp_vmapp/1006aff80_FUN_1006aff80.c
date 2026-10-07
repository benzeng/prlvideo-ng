
undefined8 FUN_1006aff80(long param_1,QString *param_2,QString *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_40;
  long *local_38;
  
  plVar6 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(plVar6 + 4);
  if (uVar1 == 0) {
    return 0;
  }
  uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
  uVar3 = (ulong)uVar5 % (ulong)uVar1;
  plVar11 = *(long **)(plVar6[1] + uVar3 * 8);
  if (plVar11 == plVar6) {
    return 0;
  }
  plVar9 = (long *)(plVar6[1] + uVar3 * 8);
  do {
    plVar12 = plVar6;
    if (*(uint *)(plVar11 + 1) == uVar5) {
      cVar4 = operator==(param_2,(QString *)(plVar11 + 2));
      plVar6 = (long *)*plVar9;
      plVar12 = *(long **)(param_1 + 8);
      plVar11 = plVar6;
      if (cVar4 != '\0') break;
    }
    plVar6 = plVar12;
    plVar9 = plVar11;
    plVar11 = (long *)*plVar9;
    plVar12 = plVar6;
  } while (plVar11 != plVar6);
  if (plVar6 == plVar12) {
    return 0;
  }
  FUN_1006b1b40(&local_38,(undefined8 *)(param_1 + 8),param_2);
  lVar7 = 0;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[2];
  }
  local_40 = 0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10);
  lVar13 = 0;
  if (lVar7 != 0) {
    do {
      while (lVar10 = lVar7, cVar4 = operator<((QString *)(lVar10 + 0x18),param_3), cVar4 == '\0') {
        lVar7 = *(long *)(lVar10 + 8);
        lVar13 = lVar10;
        if (*(long *)(lVar10 + 8) == 0) goto LAB_1006b00a1;
      }
      lVar7 = *(long *)(lVar10 + 0x10);
    } while (*(long *)(lVar10 + 0x10) != 0);
    lVar10 = lVar13;
    if (lVar13 != 0) {
LAB_1006b00a1:
      cVar4 = operator<(param_3,(QString *)(lVar10 + 0x18));
      if (cVar4 == '\0') goto LAB_1006b00b3;
    }
  }
  lVar10 = 0;
LAB_1006b00b3:
  puVar8 = &local_40;
  if (lVar10 != 0) {
    puVar8 = (undefined8 *)(lVar10 + 0x20);
  }
  uVar2 = *puVar8;
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return uVar2;
}

