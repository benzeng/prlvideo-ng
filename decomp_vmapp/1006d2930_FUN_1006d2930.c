
long FUN_1006d2930(long param_1,QString *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = *(long *)(param_1 + 8);
  plVar11 = (long *)(param_1 + 8);
  if (0 < *(int *)(lVar7 + 4)) {
    lVar10 = 0;
    do {
      cVar5 = operator==((QString *)(*(long *)(lVar7 + *(long *)(lVar7 + 0x10) + lVar10 * 8) + 8),
                         param_2);
      if (cVar5 != '\0') {
        lVar7 = *(long *)(*plVar11 + *(long *)(*plVar11 + 0x10) + lVar10 * 8);
        if (lVar7 != 0) {
          return lVar7;
        }
        break;
      }
      lVar10 = lVar10 + 1;
      lVar7 = *plVar11;
    } while (lVar10 < *(int *)(lVar7 + 4));
  }
  pvVar6 = operator_new(0x10);
  FUN_1006d3f10(pvVar6,param_2);
  puVar3 = (uint *)*plVar11;
  uVar1 = puVar3[1];
  uVar8 = uVar1 + 1;
  uVar9 = puVar3[2] & 0x7fffffff;
  if ((*puVar3 < 2) && (uVar8 <= uVar9)) {
    *(void **)((long)puVar3 + (long)(int)uVar1 * 8 + *(long *)(puVar3 + 4)) = pvVar6;
  }
  else {
    uVar4 = uVar9;
    if (uVar9 < uVar8) {
      uVar4 = uVar8;
    }
    FUN_1006d0870(plVar11,(long)(int)uVar1,uVar4,(ulong)(uVar9 < uVar8) << 3);
    lVar7 = *plVar11;
    *(void **)(*(long *)(lVar7 + 0x10) + lVar7 + (long)*(int *)(lVar7 + 4) * 8) = pvVar6;
  }
  lVar7 = *plVar11;
  iVar2 = *(int *)(lVar7 + 4);
  *(int *)(lVar7 + 4) = iVar2 + 1;
  if (-1 < iVar2) {
    lVar10 = 0;
    do {
      cVar5 = operator==((QString *)(*(long *)(lVar7 + *(long *)(lVar7 + 0x10) + lVar10 * 8) + 8),
                         param_2);
      if (cVar5 != '\0') {
        return *(long *)(*plVar11 + *(long *)(*plVar11 + 0x10) + lVar10 * 8);
      }
      lVar10 = lVar10 + 1;
      lVar7 = *plVar11;
    } while (lVar10 < *(int *)(lVar7 + 4));
  }
  return 0;
}

