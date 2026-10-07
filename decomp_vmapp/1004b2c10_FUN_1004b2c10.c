
void FUN_1004b2c10(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc2a40;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba2188;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0x20),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x28),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x30),0);
  param_1[0x38] = (QThread)0x0;
  QThread::start(param_1,7);
  return;
}

