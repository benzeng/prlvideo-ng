
void FUN_1002b4180(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100bb2f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bb2fe8;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x88));
  QMutex::~QMutex((QMutex *)(param_1 + 0x80));
  QMutex::~QMutex((QMutex *)(param_1 + 0x60));
  QThread::~QThread(param_1);
  return;
}

