
void FUN_1005f3440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111e3c8;
  QThread::QThread((QThread *)(param_1 + 1),(QObject *)0x0);
  *param_1 = &PTR_FUN_100bc7110;
  param_1[1] = &PTR_metaObject_100bc7140;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 3));
  QMutex::QMutex((QMutex *)(param_1 + 4),0);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}

