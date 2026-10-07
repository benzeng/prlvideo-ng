
void FUN_10033e580(long param_1,undefined4 param_2,uint param_3,void *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 local_40;
  uint local_3c;
  void *local_38;
  
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  plVar10 = (long *)(param_1 + 0x18);
  do {
    while (plVar14 = plVar4, *(uint *)(plVar14 + 4) < *(uint *)(param_1 + 8)) {
      plVar1 = plVar14 + 1;
      plVar14 = plVar10;
      plVar4 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_10033e5e1;
    }
    plVar4 = (long *)*plVar14;
    plVar10 = plVar14;
  } while ((long *)*plVar14 != (long *)0x0);
LAB_10033e5e1:
  if (plVar14 == (long *)(param_1 + 0x18)) {
    return;
  }
  if (*(uint *)(param_1 + 8) < *(uint *)(plVar14 + 4)) {
    return;
  }
  uVar15 = (ulong)param_3;
  local_40 = param_2;
  local_3c = param_3;
  pvVar5 = operator_new__(uVar15 * 4);
  local_38 = pvVar5;
  if (param_3 != 0) {
    _memcpy(pvVar5,param_4,(ulong)(param_3 - 1) * 4 + 4);
  }
  lVar2 = plVar14[5];
  puVar3 = *(undefined4 **)(lVar2 + 0xa0);
  if (puVar3 == *(undefined4 **)(lVar2 + 0xa8)) {
    FUN_100340bc0(lVar2 + 0x98,&local_40);
    goto LAB_10033e714;
  }
  *puVar3 = param_2;
  puVar3[1] = param_3;
  pvVar6 = operator_new__(uVar15 * 4);
  *(void **)(puVar3 + 2) = pvVar6;
  if (param_3 != 0) {
    uVar8 = 0;
    if (param_3 != 0) {
      uVar8 = 0;
      if ((param_3 & 1) != param_3) {
        uVar8 = uVar15 - (param_3 & 1);
        lVar11 = (long)pvVar5 + 4;
        lVar12 = (long)pvVar6 + 4;
        lVar13 = uVar15 - ((ulong)param_3 & 1);
        do {
          *(undefined8 *)(lVar12 + -4) = *(undefined8 *)(lVar11 + -4);
          lVar11 = lVar11 + 8;
          lVar12 = lVar12 + 8;
          lVar13 = lVar13 + -2;
        } while (lVar13 != 0);
      }
      if (uVar15 == uVar8) goto LAB_10033e6f1;
    }
    lVar11 = uVar15 - uVar8;
    puVar7 = (undefined4 *)((long)pvVar6 + uVar8 * 4);
    puVar9 = (undefined4 *)((long)pvVar5 + uVar8 * 4);
    do {
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
LAB_10033e6f1:
  *(undefined4 **)(lVar2 + 0xa0) = puVar3 + 4;
LAB_10033e714:
  operator_delete__(pvVar5);
  return;
}

