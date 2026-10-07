
void FUN_100556710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc5850;
  param_1[6] = &PTR_metaObject_100bc58d8;
  param_1[8] = &PTR_FUN_100bc5950;
  param_1[9] = &PTR_FUN_100bc59a8;
  FUN_100556800();
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    _free((void *)param_1[0x12]);
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xe));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0xb));
  QMutex::~QMutex((QMutex *)(param_1 + 10));
  QThread::~QThread((QThread *)(param_1 + 6));
  return;
}

