
void FUN_1006a60f0(QRegExp *param_1)

{
  QArrayData *pQVar1;
  Data *pDVar2;
  
  pDVar2 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1006a6124;
      pDVar2 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006a6124:
  pDVar2 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1006a614a;
      pDVar2 = *(Data **)(param_1 + 0x28);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006a614a:
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006a617a;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006a617a:
  pDVar2 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1006a61a0;
      pDVar2 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006a61a0:
  QRegExp::~QRegExp(param_1);
  return;
}

