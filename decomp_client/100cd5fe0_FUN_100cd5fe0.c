
undefined8 FUN_100cd5fe0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  undefined1 local_48 [8];
  long local_40;
  undefined1 local_31;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar6 = (Data *)QListData::detach((int)param_1);
    lVar4 = *param_1;
    lVar7 = (long)*(int *)(lVar4 + 8);
    if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)(lVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar7 * 8),puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        local_40 = CONCAT71(local_40._1_7_,*(int *)pDVar6 != 0);
        if (*(int *)pDVar6 != 0) goto LAB_100cd6063;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100cd6063:
  puVar3 = (uint *)*param_1;
  uVar2 = puVar3[2];
  uVar5 = *(undefined8 *)(puVar3 + (long)(int)uVar2 * 2 + 4);
  if (1 < *puVar3) {
    pDVar6 = (Data *)QListData::detach((int)param_1);
    lVar4 = *param_1;
    lVar7 = (long)*(int *)(lVar4 + 8);
    puVar1 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cd60d2;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100cd60d2:
  local_40 = *param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8;
  FUN_100cd5f00(local_48,param_1,&local_40);
  return uVar5;
}

