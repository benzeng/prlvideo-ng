
void FUN_100989b30(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 < 0) {
    return;
  }
  plVar7 = (long *)(param_1 + 0x10);
  puVar2 = (uint *)*plVar7;
  uVar1 = puVar2[2];
  if ((int)(puVar2[3] - uVar1) <= param_2) {
    return;
  }
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
        if (*(int *)pDVar4 != 0) goto LAB_100989bcc;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_100989bcc:
  QListData::remove((int)plVar7);
  return;
}

