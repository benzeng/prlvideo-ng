
void FUN_100241030(long *param_1)

{
  void **ppvVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  int iVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  
  ppvVar1 = (void **)(param_1 + 9);
  puVar4 = (uint *)param_1[9];
  if (1 < *puVar4) {
    uVar3 = puVar4[2];
    pDVar7 = (Data *)QListData::detach((int)ppvVar1);
    pvVar5 = *ppvVar1;
    lVar8 = (long)*(int *)((long)pvVar5 + 8);
    if ((puVar4 + (long)(int)uVar3 * 2 != (uint *)((long)pvVar5 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar5 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar5 + 0xc))) {
      _memcpy((void *)((long)pvVar5 + lVar8 * 8 + 0x10),puVar4 + (long)(int)uVar3 * 2 + 4,lVar9 * 8)
      ;
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        UNLOCK();
        if (*(int *)pDVar7 != 0) goto LAB_1002410b4;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_1002410b4:
  puVar4 = *ppvVar1;
  uVar3 = puVar4[2];
  if (1 < *puVar4) {
    pDVar7 = (Data *)QListData::detach((int)ppvVar1);
    pvVar5 = *ppvVar1;
    lVar8 = (long)*(int *)((long)pvVar5 + 8);
    puVar2 = (uint *)((long)pvVar5 + lVar8 * 8 + 0x10);
    if ((puVar4 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
       (lVar9 = *(int *)((long)pvVar5 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar5 + 0xc))) {
      _memcpy(puVar2,puVar4 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        UNLOCK();
        if (*(int *)pDVar7 != 0) goto LAB_10024112a;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_10024112a:
  QListData::erase(ppvVar1);
  iVar6 = FUN_100240e70(param_1);
  if (iVar6 < 0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

