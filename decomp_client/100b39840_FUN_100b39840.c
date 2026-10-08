
undefined1 FUN_100b39840(int *param_1,QString *param_2,QString *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long local_38;
  
  if (*param_1 == 0) {
    FUN_100df99c0("","KeyValueDataParser",0,"Error: can\'t set key with read only mode");
    return 0;
  }
  plVar6 = *(long **)(param_1 + 2);
  uVar1 = *(uint *)(plVar6 + 4);
  if (uVar1 == 0) {
    return 0;
  }
  uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
  uVar2 = (ulong)uVar5 % (ulong)uVar1;
  plVar8 = *(long **)(plVar6[1] + uVar2 * 8);
  if (plVar8 == plVar6) {
    return 0;
  }
  plVar11 = (long *)(plVar6[1] + uVar2 * 8);
  do {
    plVar10 = plVar8;
    plVar13 = plVar6;
    if (*(uint *)(plVar8 + 1) == uVar5) {
      cVar3 = operator==(param_2,(QString *)(plVar8 + 2));
      plVar6 = (long *)*plVar11;
      plVar13 = *(long **)(param_1 + 2);
      plVar10 = plVar6;
      if (cVar3 != '\0') break;
    }
    plVar6 = plVar13;
    plVar8 = (long *)*plVar10;
    plVar11 = plVar10;
    plVar13 = plVar6;
  } while (plVar8 != plVar6);
  if (plVar6 == plVar13) {
    return 0;
  }
  plVar6 = (long *)FUN_100b3b1d0(param_1 + 2,param_2);
  lVar7 = 0;
  if (*plVar6 != 0) {
    lVar7 = *(long *)(*plVar6 + 0x10);
  }
  local_38 = 0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10);
  lVar12 = 0;
  if (lVar7 != 0) {
    do {
      while (lVar9 = lVar7, cVar3 = operator<((QString *)(lVar9 + 0x18),param_3), cVar3 == '\0') {
        lVar7 = *(long *)(lVar9 + 8);
        lVar12 = lVar9;
        if (*(long *)(lVar9 + 8) == 0) goto LAB_100b3998f;
      }
      lVar7 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(lVar9 + 0x10) != 0);
    lVar9 = lVar12;
    if (lVar12 != 0) {
LAB_100b3998f:
      cVar3 = operator<(param_3,(QString *)(lVar9 + 0x18));
      if (cVar3 == '\0') goto LAB_100b399a1;
    }
  }
  lVar9 = 0;
LAB_100b399a1:
  plVar8 = &local_38;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 0x20);
  }
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100b38950(param_1,plVar6,lVar7,param_4,lVar7 + 0x20);
  }
  return uVar4;
}

