
void FUN_1003fbfc0(QThread *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bbfc20;
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    FUN_1008e3970("[RH]","HddUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","!isRunning()",
                  "ReadHistory.cpp",0x4e,"~CHistoryPrefetchThread");
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  pQVar2 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003fc072;
      pQVar2 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1003fc072:
  QThread::~QThread(param_1);
  return;
}

