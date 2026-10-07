
void FUN_100469720(long *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  Data *pDVar5;
  Data *pDVar6;
  long lVar7;
  
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 8);
  pDVar5 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_100469590(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar7 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar7 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pvVar3 = *(void **)pDVar6;
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            if (*(void **)((long)pvVar3 + 0x10) != pvVar4) {
              *(void **)((long)pvVar3 + 0x10) = pvVar4;
            }
            operator_delete(pvVar4);
          }
          operator_delete(pvVar3);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

