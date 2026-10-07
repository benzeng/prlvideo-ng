
void FUN_100083700(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100baa3c0;
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QThread::~QThread(param_1);
  return;
}

