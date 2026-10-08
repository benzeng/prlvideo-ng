
void FUN_100add420(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = *(uint **)(param_1 + 0x18);
  uVar1 = puVar2[2];
  if (puVar2[3] == uVar1) {
    return;
  }
  plVar7 = (long *)(param_1 + 0x18);
  if (1 < *puVar2) {
    pDVar4 = (Data *)QListData::detach((int)plVar7);
    lVar3 = *plVar7;
    lVar5 = (long)*(int *)(lVar3 + 8);
    if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar5 * 8)) &&
       (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar6 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        UNLOCK();
        if (*(int *)pDVar4 != 0) goto LAB_100add4b3;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_100add4b3:
  if (*(int *)(*plVar7 + 0x10 + (long)*(int *)(*plVar7 + 8) * 8) != param_2) {
    FUN_100223940(plVar7);
  }
  return;
}

