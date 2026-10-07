
void FUN_10046dd00(undefined8 *param_1)

{
  FUN_100472ff0();
  *param_1 = &PTR_FUN_100bc17f8;
  param_1[3] = 0;
  QThread::QThread((QThread *)(param_1 + 4),(QObject *)0x0);
  param_1[4] = &PTR_FUN_100bc1768;
  param_1[6] = param_1;
  *(undefined4 *)(param_1 + 7) = 10000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = PTR_shared_null_100ba20d0;
  return;
}

