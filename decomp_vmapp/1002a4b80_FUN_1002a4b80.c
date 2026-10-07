
void FUN_1002a4b80(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100bb2a70;
  FUN_1002a49d0();
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xc30));
  QMutex::~QMutex((QMutex *)(param_1 + 0xc28));
  QMutex::~QMutex((QMutex *)(param_1 + 0x18));
  QThread::~QThread(param_1);
  return;
}

