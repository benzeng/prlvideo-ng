
void FUN_10022d1b0(long *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 8);
  pDVar4 = (Data *)QListData::detach((int)param_1);
  lVar2 = *param_1;
  FUN_10022cf90(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,lVar7 + 0x10 + (long)iVar1 * 8);
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
      lVar7 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pvVar3 = *(void **)pDVar5;
        if (pvVar3 != (void *)0x0) {
          pQVar6 = *(QArrayData **)((long)pvVar3 + 0x38);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              UNLOCK();
              if (*(int *)pQVar6 != 0) goto LAB_10022d278;
              pQVar6 = *(QArrayData **)((long)pvVar3 + 0x38);
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_10022d278:
          pQVar6 = *(QArrayData **)((long)pvVar3 + 0x30);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              UNLOCK();
              if (*(int *)pQVar6 != 0) goto LAB_10022d2a8;
              pQVar6 = *(QArrayData **)((long)pvVar3 + 0x30);
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_10022d2a8:
          FUN_100086a10(pvVar3);
          operator_delete(pvVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

