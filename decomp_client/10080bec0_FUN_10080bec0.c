
void FUN_10080bec0(QThread *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ffd20;
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10080bf08;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10080bf08:
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

