
void FUN_1002e25d0(QThread *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_101116f40;
  cVar1 = QThread::isRunning();
  if (cVar1 != '\0') {
    QMutex::lock();
    param_1[0x18] = (QThread)0x1;
    QMutex::unlock();
    QWaitCondition::wakeAll();
    QThread::wait((ulong)param_1);
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x28));
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  QThread::~QThread(param_1);
  return;
}

