
void FUN_100cd8df0(QThread *param_1)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_102259f60;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = (QThread)0x0;
  param_1[0x15] = (QThread)0x0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x18));
  QMutex::QMutex((QMutex *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x40));
  QMutex::QMutex((QMutex *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

