
void FUN_100467650(QObject *param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc1330;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc13c0;
  QMutex::lock();
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_100469340(param_1 + 0x40);
  QMutex::unlock();
  if (lVar2 != 0) {
    FUN_1004c07d0(param_1 + 0x10,lVar2,0xf000001c);
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x70);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10046770d;
      pQVar3 = *(QArrayData **)(param_1 + 0x70);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10046770d:
  QMutex::~QMutex((QMutex *)(param_1 + 0x68));
  pDVar4 = *(Data **)(param_1 + 0x60);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1004677b8;
      pDVar4 = *(Data **)(param_1 + 0x60);
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar2 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar3 == 0) {
LAB_100467790:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pDVar5;
            goto LAB_100467790;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1004677b8:
  QMutex::~QMutex((QMutex *)(param_1 + 0x50));
  FUN_100469440(param_1 + 0x40);
  QMutex::~QMutex((QMutex *)(param_1 + 0x38));
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

