
void FUN_1005a4da0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_10111deb8;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 9),0);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = (long)(param_1 + 3);
  param_1[4] = (long)(param_1 + 3);
  (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1);
  *param_1 = (long)&PTR_FUN_100bc6698;
  param_1[0xb] = (long)(param_1 + 0xb);
  param_1[0xc] = (long)(param_1 + 0xb);
  param_1[0xd] = 0;
  QThread::QThread((QThread *)(param_1 + 0xe),(QObject *)0x0);
  param_1[0xe] = (long)&PTR_metaObject_100bc6938;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x15),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x16));
  param_1[0x18] = (long)PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((long)param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x10] = (long)param_1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  return;
}

