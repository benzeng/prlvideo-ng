
void FUN_100291b30(undefined8 *param_1)

{
  int iVar1;
  QVariant *this;
  int *piVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *pDVar6;
  
  pDVar6 = (Data *)param_1[5];
  if (*(int *)pDVar6 != -1) {
    if (*(int *)pDVar6 != 0) {
      LOCK();
      *(int *)pDVar6 = *(int *)pDVar6 + -1;
      UNLOCK();
      if (*(int *)pDVar6 != 0) goto LAB_100291bba;
      pDVar6 = (Data *)param_1[5];
    }
    iVar1 = *(int *)(pDVar6 + 0xc);
    if (iVar1 != *(int *)(pDVar6 + 8)) {
      lVar5 = (long)*(int *)(pDVar6 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = pDVar6 + (long)iVar1 * 8 + 8;
      do {
        this = *(QVariant **)pDVar3;
        if (this != (QVariant *)0x0) {
          QVariant::~QVariant(this);
          operator_delete(this);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100291bba:
  pQVar4 = (QArrayData *)param_1[3];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100291bea;
      pQVar4 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100291bea:
  pQVar4 = (QArrayData *)param_1[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100291c1a;
      pQVar4 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100291c1a:
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1);
    }
  }
  return;
}

