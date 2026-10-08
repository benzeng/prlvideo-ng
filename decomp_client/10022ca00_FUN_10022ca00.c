
void FUN_10022ca00(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  pDVar6 = (Data *)*param_1;
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) {
        return;
      }
      pDVar6 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        pvVar2 = *(void **)pDVar3;
        if (pvVar2 != (void *)0x0) {
          pQVar4 = *(QArrayData **)((long)pvVar2 + 0x38);
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              UNLOCK();
              if (*(int *)pQVar4 != 0) goto LAB_10022ca98;
              pQVar4 = *(QArrayData **)((long)pvVar2 + 0x38);
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
LAB_10022ca98:
          pQVar4 = *(QArrayData **)((long)pvVar2 + 0x30);
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              UNLOCK();
              if (*(int *)pQVar4 != 0) goto LAB_10022cac8;
              pQVar4 = *(QArrayData **)((long)pvVar2 + 0x30);
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
LAB_10022cac8:
          FUN_100086a10(pvVar2);
          operator_delete(pvVar2);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
  return;
}

