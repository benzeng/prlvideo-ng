
void FUN_100cd8ee0(QThread *param_1)

{
  *(undefined **)param_1 = &DAT_102259f60;
  QMutex::~QMutex((QMutex *)(param_1 + 0x48));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x40));
  QMutex::~QMutex((QMutex *)(param_1 + 0x20));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x18));
  QThread::~QThread(param_1);
  return;
}

