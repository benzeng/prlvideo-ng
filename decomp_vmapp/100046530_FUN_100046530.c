
ulong FUN_100046530(long *param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  Data *pDVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  
  puVar4 = (uint *)*param_1;
  lVar13 = (long)(int)puVar4[2];
  if ((int)puVar4[3] <= (int)puVar4[2]) {
    return 0;
  }
  puVar12 = puVar4 + lVar13 * 2 + 2;
  lVar5 = *param_2;
  lVar9 = (long)(int)puVar4[3] * 8 + lVar13 * -8;
  do {
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = lVar9 + -8;
    puVar1 = puVar12 + 2;
    puVar12 = puVar12 + 2;
  } while (*(long *)puVar1 != lVar5);
  puVar1 = puVar4 + lVar13 * 2 + 4;
  if (((long)puVar12 - (long)puVar1 & 0x7fffffff8U) == 0x7fffffff8) {
    return 0;
  }
  if (1 < *puVar4) {
    pDVar6 = (Data *)QListData::detach((int)param_1);
    lVar13 = *param_1;
    lVar9 = (long)*(int *)(lVar13 + 8);
    puVar4 = (uint *)(lVar13 + 0x10 + lVar9 * 8);
    if ((puVar1 != puVar4) &&
       (lVar10 = *(int *)(lVar13 + 0xc) - lVar9, lVar10 != 0 && lVar9 <= *(int *)(lVar13 + 0xc))) {
      _memcpy(puVar4,puVar1,lVar10 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_10004660b;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10004660b:
  lVar13 = *param_1;
  plVar8 = (long *)(lVar13 + 0x10 +
                   ((long)(int)((ulong)((long)puVar12 - (long)puVar1) >> 3) +
                   (long)*(int *)(lVar13 + 8)) * 8);
  iVar3 = *(int *)(lVar13 + 0xc);
  plVar11 = plVar8;
  while ((long *)(lVar13 + 8 + (long)iVar3 * 8) != plVar8) {
    plVar2 = plVar8 + 1;
    plVar8 = plVar8 + 1;
    if (*plVar2 != lVar5) {
      *plVar11 = *plVar2;
      plVar11 = plVar11 + 1;
    }
  }
  uVar7 = (ulong)((lVar13 + 0x10 + (long)iVar3 * 8) - (long)plVar11) >> 3;
  *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar7;
  return uVar7;
}

