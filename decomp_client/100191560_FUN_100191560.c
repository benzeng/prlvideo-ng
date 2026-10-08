
void FUN_100191560(long *param_1)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 8);
  pDVar3 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_10017f680(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar5 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar5 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

