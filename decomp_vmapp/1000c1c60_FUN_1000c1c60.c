
void FUN_1000c1c60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_100befe10;
  *(undefined4 *)(param_1 + 1) = 0;
  QThread::QThread((QThread *)(param_1 + 2),(QObject *)0x0);
  *param_1 = &PTR_FUN_100ba8b40;
  param_1[2] = &PTR_metaObject_100ba8c08;
  param_1[9] = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 0xb));
  QMutex::QMutex((QMutex *)(param_1 + 0xc));
  param_1[0xd] = PTR_shared_null_100ba20f0;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 0xe),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  QSemaphore::release((int)(QSemaphore *)(param_1 + 0xe));
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}

