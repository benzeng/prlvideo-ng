
void FUN_100039a80(undefined8 *param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  
  pDVar4 = (Data *)*param_1;
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
      pDVar4 = (Data *)*param_1;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar5 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100039af0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_100039af0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

