
void FUN_1000e6e10(long *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  pDVar4 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_1000e6f20(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar6 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pvVar3 = *(void **)pDVar5;
        if (pvVar3 != (void *)0x0) {
          FUN_1000be7b0(pvVar3);
          operator_delete(pvVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

