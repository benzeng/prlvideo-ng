
void FUN_1001136f0(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  uint *local_40;
  uint *local_38;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    uVar1 = puVar2[2];
    pDVar5 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar6 = (long)*(int *)(lVar3 + 8);
    if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar6 * 8)) &&
       (lVar7 = *(int *)(lVar3 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar6 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar7 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)pDVar5 != 0);
        if (*(int *)pDVar5 != 0) goto LAB_100113773;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_100113773:
  puVar4 = (uint *)*param_1;
  puVar2 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  if (1 < *puVar4) {
    pDVar5 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar6 = (long)*(int *)(lVar3 + 8);
    puVar4 = (uint *)(lVar3 + 0x10 + lVar6 * 8);
    if ((puVar2 != puVar4) &&
       (lVar7 = *(int *)(lVar3 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
      _memcpy(puVar4,puVar2,lVar7 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)pDVar5 != 0);
        if (*(int *)pDVar5 != 0) goto LAB_1001137dd;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1001137dd:
  local_40 = (uint *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 0xc) * 8);
  if (puVar2 != local_40) {
    local_38 = puVar2;
    FUN_10012b260(&local_38,&local_40,puVar2,FUN_100113820);
  }
  return;
}

