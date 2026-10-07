
void FUN_1002f9d60(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100bb6200;
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xe0));
  QMutex::~QMutex((QMutex *)(param_1 + 0xd8));
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

