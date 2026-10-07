
ulong FUN_10005f680(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  Data *pDVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  
  puVar4 = (uint *)*param_1;
  lVar12 = (long)(int)puVar4[2];
  if ((int)puVar4[3] <= (int)puVar4[2]) {
    return 0;
  }
  puVar11 = puVar4 + lVar12 * 2 + 2;
  uVar2 = *param_2;
  lVar8 = (long)(int)puVar4[3] * 8 + lVar12 * -8;
  do {
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = lVar8 + -8;
    puVar1 = puVar11 + 2;
    puVar11 = puVar11 + 2;
  } while (*puVar1 != uVar2);
  puVar1 = puVar4 + lVar12 * 2 + 4;
  if (((long)puVar11 - (long)puVar1 & 0x7fffffff8U) == 0x7fffffff8) {
    return 0;
  }
  if (1 < *puVar4) {
    pDVar5 = (Data *)QListData::detach((int)param_1);
    lVar12 = *param_1;
    lVar8 = (long)*(int *)(lVar12 + 8);
    puVar4 = (uint *)(lVar12 + 0x10 + lVar8 * 8);
    if ((puVar1 != puVar4) &&
       (lVar9 = *(int *)(lVar12 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar12 + 0xc))) {
      _memcpy(puVar4,puVar1,lVar9 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        if (*(int *)pDVar5 != 0) goto LAB_10005f75b;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_10005f75b:
  lVar12 = *param_1;
  puVar7 = (undefined8 *)
           (lVar12 + 0x10 +
           ((long)(int)((ulong)((long)puVar11 - (long)puVar1) >> 3) + (long)*(int *)(lVar12 + 8)) *
           8);
  iVar3 = *(int *)(lVar12 + 0xc);
  puVar10 = puVar7;
  while ((undefined8 *)(lVar12 + 8 + (long)iVar3 * 8) != puVar7) {
    puVar4 = (uint *)(puVar7 + 1);
    puVar7 = puVar7 + 1;
    if (*puVar4 != uVar2) {
      *puVar10 = *puVar7;
      puVar10 = puVar10 + 1;
    }
  }
  uVar6 = (ulong)((lVar12 + 0x10 + (long)iVar3 * 8) - (long)puVar10) >> 3;
  *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar6;
  return uVar6;
}

