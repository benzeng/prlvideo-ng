
undefined8 FUN_100720e90(void **param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  puVar3 = *param_1;
  iVar9 = (int)param_1;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar6 = (Data *)QListData::detach(iVar9);
    pvVar4 = *param_1;
    lVar7 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar7 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_100720f0e;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100720f0e:
  puVar3 = *param_1;
  uVar2 = puVar3[2];
  uVar5 = *(undefined8 *)(puVar3 + (long)(int)uVar2 * 2 + 4);
  if (1 < *puVar3) {
    pDVar6 = (Data *)QListData::detach(iVar9);
    pvVar4 = *param_1;
    lVar7 = (long)*(int *)((long)pvVar4 + 8);
    puVar1 = (uint *)((long)pvVar4 + lVar7 * 8 + 0x10);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_100720f7d;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100720f7d:
  puVar3 = *param_1;
  uVar2 = puVar3[2];
  if (1 < *puVar3) {
    pDVar6 = (Data *)QListData::detach(iVar9);
    pvVar4 = *param_1;
    lVar7 = (long)*(int *)((long)pvVar4 + 8);
    puVar1 = (uint *)((long)pvVar4 + lVar7 * 8 + 0x10);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_100720ff3;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100720ff3:
  QListData::erase(param_1);
  return uVar5;
}

