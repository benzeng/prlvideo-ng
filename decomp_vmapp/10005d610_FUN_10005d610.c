
void FUN_10005d610(QThread *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100ba8588;
  QThread::wait((ulong)param_1);
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  pDVar1 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10005d663;
      pDVar1 = *(Data **)(param_1 + 0x18);
    }
    QListData::dispose(pDVar1);
  }
LAB_10005d663:
  QThread::~QThread(param_1);
  return;
}

