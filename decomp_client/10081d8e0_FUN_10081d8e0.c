
void FUN_10081d8e0(CAbstractTask *param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  Data *pDVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_102206960;
  pDVar5 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_10081d981;
      pDVar5 = *(Data **)(param_1 + 0x18);
    }
    iVar1 = *(int *)(pDVar5 + 0xc);
    if (iVar1 != *(int *)(pDVar5 + 8)) {
      lVar4 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = pDVar5 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_10081d960:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_10081d960;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_10081d981:
  CAbstractTask::~CAbstractTask(param_1);
  operator_delete(param_1);
  return;
}

