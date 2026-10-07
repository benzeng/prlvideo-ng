
void FUN_1002f8560(long param_1,void *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  void **ppvVar11;
  
  puVar4 = *(uint **)(param_1 + 0x40);
  uVar3 = puVar4[2];
  if (puVar4[3] == uVar3) {
    return;
  }
  ppvVar11 = (void **)(param_1 + 0x40);
  iVar10 = (int)ppvVar11;
  if (1 < *puVar4) {
    pDVar6 = (Data *)QListData::detach(iVar10);
    pvVar5 = *ppvVar11;
    lVar7 = (long)*(int *)((long)pvVar5 + 8);
    if ((puVar4 + (long)(int)uVar3 * 2 != (uint *)((long)pvVar5 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar5 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar5 + 0xc))) {
      _memcpy((void *)((long)pvVar5 + lVar7 * 8 + 0x10),puVar4 + (long)(int)uVar3 * 2 + 4,lVar8 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1002f85fe;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1002f85fe:
  lVar7 = *(long *)((long)*ppvVar11 + (long)*(int *)((long)*ppvVar11 + 8) * 8 + 0x10);
  if (*(uint *)(lVar7 + 0x43c) < param_3) {
    param_3 = *(uint *)(lVar7 + 0x43c);
  }
  _memcpy((void *)(lVar7 + 0x4d8),param_2,(ulong)param_3);
  *(uint *)(lVar7 + 0x454) = param_3;
  *(undefined4 *)(lVar7 + 0x468) = 0;
  puVar4 = *ppvVar11;
  if (1 < *puVar4) {
    uVar3 = puVar4[2];
    pDVar6 = (Data *)QListData::detach(iVar10);
    pvVar5 = *ppvVar11;
    lVar8 = (long)*(int *)((long)pvVar5 + 8);
    if ((puVar4 + (long)(int)uVar3 * 2 != (uint *)((long)pvVar5 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar5 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar5 + 0xc))) {
      _memcpy((void *)((long)pvVar5 + lVar8 * 8 + 0x10),puVar4 + (long)(int)uVar3 * 2 + 4,lVar9 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1002f86aa;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1002f86aa:
  puVar4 = *ppvVar11;
  uVar3 = puVar4[2];
  if (1 < *puVar4) {
    pDVar6 = (Data *)QListData::detach(iVar10);
    pvVar5 = *ppvVar11;
    lVar8 = (long)*(int *)((long)pvVar5 + 8);
    puVar2 = (uint *)((long)pvVar5 + lVar8 * 8 + 0x10);
    if ((puVar4 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
       (lVar9 = *(int *)((long)pvVar5 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar5 + 0xc))) {
      _memcpy(puVar2,puVar4 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1002f8720;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1002f8720:
  QListData::erase(ppvVar11);
  lVar8 = *(long *)(lVar7 + 0x458);
  if ((1 < DAT_1011c568c) && (*(int *)(lVar7 + 0x450) == 0x69)) {
    FUN_1002da980(2,lVar7);
  }
  uVar3 = *(uint *)(lVar7 + 0x470);
  *(undefined4 *)(lVar7 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar8 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(lVar8 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((uVar3 & 4) != 0) {
    FUN_1002c9070(lVar7);
  }
  return;
}

