
void FUN_100b2e760(QRegExp *param_1)

{
  QArrayData *pQVar1;
  Data *pDVar2;
  
  pDVar2 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100b2e794;
      pDVar2 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar2);
  }
LAB_100b2e794:
  pDVar2 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100b2e7ba;
      pDVar2 = *(Data **)(param_1 + 0x28);
    }
    QListData::dispose(pDVar2);
  }
LAB_100b2e7ba:
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b2e7ea;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100b2e7ea:
  pDVar2 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100b2e810;
      pDVar2 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar2);
  }
LAB_100b2e810:
  QRegExp::~QRegExp(param_1);
  return;
}

