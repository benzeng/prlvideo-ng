
void FUN_1002f50d0(QThread *param_1,undefined8 param_2)

{
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bb60d0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  param_1[0x20] = (QThread)0x0;
  QThread::start(param_1,7);
  while (param_1[0x20] == (QThread)0x0) {
    QThread::msleep(1);
  }
  return;
}

