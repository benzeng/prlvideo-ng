
void FUN_100b3b020(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint *local_40;
  uint *local_38;
  
  puVar3 = (uint *)*param_1;
  uVar1 = puVar3[2];
  if (puVar3[3] == uVar1) {
    return;
  }
  iVar9 = (int)param_1;
  if (1 < *puVar3) {
    pDVar6 = (Data *)QListData::detach(iVar9);
    lVar4 = *param_1;
    lVar7 = (long)*(int *)(lVar4 + 8);
    if ((puVar3 + (long)(int)uVar1 * 2 != (uint *)(lVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar7 * 8),puVar3 + (long)(int)uVar1 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)pDVar6 != 0);
        if (*(int *)pDVar6 != 0) goto LAB_100b3b0ad;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100b3b0ad:
  puVar5 = (uint *)*param_1;
  puVar3 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
  if (1 < *puVar5) {
    pDVar6 = (Data *)QListData::detach(iVar9);
    lVar4 = *param_1;
    lVar7 = (long)*(int *)(lVar4 + 8);
    puVar5 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
    if ((puVar3 != puVar5) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar5,puVar3,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)pDVar6 != 0);
        if (*(int *)pDVar6 != 0) goto LAB_100b3b117;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100b3b117:
  puVar5 = (uint *)*param_1;
  uVar1 = puVar5[3];
  if (1 < *puVar5) {
    uVar2 = puVar5[2];
    pDVar6 = (Data *)QListData::detach(iVar9);
    lVar4 = *param_1;
    lVar7 = (long)*(int *)(lVar4 + 8);
    if ((puVar5 + (long)(int)uVar2 * 2 != (uint *)(lVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar7 * 8),puVar5 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)pDVar6 != 0);
        if (*(int *)pDVar6 != 0) goto LAB_100b3b198;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100b3b198:
  local_40 = puVar5 + (long)(int)uVar1 * 2 + 4;
  local_38 = puVar3;
  FUN_100b3bbf0(&local_38,&local_40,*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
  return;
}

