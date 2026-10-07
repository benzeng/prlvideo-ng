
void FUN_1002f8d50(undefined8 *param_1)

{
  Data *pDVar1;
  
  *param_1 = &PTR_FUN_100bb6278;
  FUN_1002f8b30((QThread *)(param_1 + 9));
  param_1[9] = &PTR_metaObject_100bb6200;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x25));
  QMutex::~QMutex((QMutex *)(param_1 + 0x24));
  QThread::~QThread((QThread *)(param_1 + 9));
  pDVar1 = (Data *)param_1[8];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1002f8dc4;
      pDVar1 = (Data *)param_1[8];
    }
    QListData::dispose(pDVar1);
  }
LAB_1002f8dc4:
  FUN_1002dc020(param_1);
  return;
}

