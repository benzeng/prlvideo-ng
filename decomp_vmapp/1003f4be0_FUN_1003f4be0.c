
void FUN_1003f4be0(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bbfb70;
  QMutex::lock();
  FUN_1003f4c70(param_1);
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  QThread::~QThread(param_1);
  return;
}

