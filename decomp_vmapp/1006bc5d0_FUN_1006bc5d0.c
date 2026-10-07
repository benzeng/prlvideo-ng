
void FUN_1006bc5d0(undefined8 *param_1)

{
  uint uVar1;
  void **ppvVar2;
  uint *puVar3;
  void *pvVar4;
  long *plVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  ppvVar2 = (void **)*param_1;
  puVar3 = *ppvVar2;
  if (puVar3 + (long)(int)puVar3[3] * 2 + 4 == (uint *)param_1[2]) {
    return;
  }
  if (1 < *puVar3) {
    uVar1 = puVar3[2];
    pDVar6 = (Data *)QListData::detach((int)ppvVar2);
    pvVar4 = *ppvVar2;
    lVar8 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar3 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar8 * 8 + 0x10),puVar3 + (long)(int)uVar1 * 2 + 4,lVar9 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1006bc688;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1006bc688:
  uVar7 = QListData::erase(ppvVar2);
  param_1[1] = uVar7;
  plVar5 = (long *)*param_1;
  puVar3 = (uint *)*plVar5;
  if (1 < *puVar3) {
    uVar1 = puVar3[2];
    pDVar6 = (Data *)QListData::detach((int)plVar5);
    lVar8 = *plVar5;
    lVar9 = (long)*(int *)(lVar8 + 8);
    if ((puVar3 + (long)(int)uVar1 * 2 != (uint *)(lVar8 + lVar9 * 8)) &&
       (lVar10 = *(int *)(lVar8 + 0xc) - lVar9, lVar10 != 0 && lVar9 <= *(int *)(lVar8 + 0xc))) {
      _memcpy((void *)(lVar8 + 0x10 + lVar9 * 8),puVar3 + (long)(int)uVar1 * 2 + 4,lVar10 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1006bc70a;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1006bc70a:
  param_1[2] = *plVar5 + 0x10 + (long)*(int *)(*plVar5 + 0xc) * 8;
  return;
}

