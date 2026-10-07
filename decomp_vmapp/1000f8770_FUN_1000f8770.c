
void FUN_1000f8770(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_100baa2f0;
  QMutex::lock();
  cVar4 = QThread::isRunning();
  if (cVar4 != '\0') {
    QThread::exit((int)(QThread *)(param_1 + 0x18));
  }
  QMutex::unlock();
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  QTimer::~QTimer((QTimer *)(param_1 + 0x28));
  QThread::~QThread((QThread *)(param_1 + 0x18));
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

